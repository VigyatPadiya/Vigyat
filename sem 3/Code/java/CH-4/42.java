class SharedResource {
    public synchronized void display(String threadName) {
        System.out.println(threadName + " has started using the resource.");
        for (int i = 1; i <= 3; i++) {
            System.out.println(threadName + " - Count: " + i);
            try {
                Thread.sleep(500); 
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
        }
        System.out.println(threadName + " has finished using the resource.");
    }
}

class MyThread extends Thread {
    SharedResource resource;

    public MyThread(SharedResource resource, String name) {
        super(name);
        this.resource = resource;
    }

    @Override
    public void run() {
        resource.display(Thread.currentThread().getName());
    }
}

class SynchronizedThreadExample {
    public static void main(String[] args) {
        SharedResource resource = new SharedResource(); 

        MyThread thread1 = new MyThread(resource, "Thread 1");
        MyThread thread2 = new MyThread(resource, "Thread 2");

        thread1.start();
        thread2.start();
    }
}
