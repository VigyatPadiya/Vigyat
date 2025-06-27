class LoopThread extends Thread 
{
    private String threadName;

    LoopThread(String name) 
    {
        this.threadName = name;
    }

    public void run() 
    {
        for (int i = 1; i <= 5; i++) 
        {
            try 
            {
                // Simulate some work with sleep
                Thread.sleep(500);
            } catch (InterruptedException e) 
            {
                System.out.println(threadName + " interrupted.");
            }
            System.out.println(threadName + ": " + i);
        }
        System.out.println(threadName + " has finished execution.");
    }
}

class JoinThreadsExample
{
        public static void main(String[] args) 
    {
        LoopThread thread1 = new LoopThread("Thread 1");
        LoopThread thread2 = new LoopThread("Thread 2");

        thread1.start();
        thread2.start();

        try 
        {
            thread1.join();
            thread2.join();
        } 
        catch (InterruptedException e) 
        {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("Both threads have finished execution. Exiting main thread.");
    }
}