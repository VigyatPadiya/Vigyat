#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 5

typedef struct {
    int customer_id;
    char name[100];
    char service_request[100];
} Customer;

typedef struct {
    Customer queue[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

void init_queue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int is_full(Queue *q) {
    return q->rear == MAX_QUEUE_SIZE - 1;
}

int is_empty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}

void enqueue(Queue *q, Customer c) {
    if (is_full(q)) {
        printf("Queue is full. Cannot add more customers.\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0;
    }
    q->rear++;
    q->queue[q->rear] = c;
    printf("Customer %s added to the queue.\n", c.name);
}

void dequeue(Queue *q) {
    if (is_empty(q)) {
        printf("Queue is empty. No customers to serve.\n");
        return;
    }
    Customer c = q->queue[q->front];
    printf("Serving customer %s...\n", c.name);
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
}

void display_queue(Queue *q) {
    if (is_empty(q)) {
        printf("No customers in the queue.\n");
        return;
    }
    printf("Customers in the queue:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("Customer ID: %d\n Name: %s\n Service Request: %s\n", q->queue[i].customer_id, q->queue[i].name, q->queue[i].service_request);
    }
}

int main() {
    Queue q;
    init_queue(&q);

    int choice;
    Customer c;

    while (1) {
        printf("\nCustomer Service Menu:\n");
        printf("1. Add Customer\n");
        printf("2. Serve Customer\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                if (is_full(&q)) {
                    printf("Queue is full! Cannot add more customers.\n");
                } else {

                    c.customer_id = q.rear + 2;
                    printf("Enter customer name: ");
                    fgets(c.name, 100, stdin);
                    c.name[strcspn(c.name, "\n")] = '\0';
                    printf("Enter service request: ");
                    fgets(c.service_request, 100, stdin);
                    c.service_request[strcspn(c.service_request, "\n")] = '\0';
                    enqueue(&q, c);
                }
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display_queue(&q);
                break;
            case 4:
                printf("Exiting the system...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
