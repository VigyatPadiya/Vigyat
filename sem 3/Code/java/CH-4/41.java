class MyRunnable implements Runnable 
{
    @Override
    public void run() 
    {
        for (int i = 1; i <= 3; i++) 
        {
            System.out.println(Thread.currentThread().getName() + " - Priority: " + 
                               Thread.currentThread().getPriority() + " - Count: " + i);
            try 
            {
                Thread.sleep(500);
            } catch (InterruptedException e) 
            {
                System.out.println(e.getMessage());
            }
        }
    }
}

class ThreadNamePriorityExample 
{
    public static void main(String[] args) 
    {
        MyRunnable runnable = new MyRunnable();

        Thread thread1 = new Thread(runnable);
        thread1.setName("High Priority Thread");
        thread1.setPriority(Thread.MAX_PRIORITY);

        Thread thread2 = new Thread(runnable);
        thread2.setName("Low Priority Thread");
        thread2.setPriority(Thread.MIN_PRIORITY);
        thread1.start();
        thread2.start();
    }
}
