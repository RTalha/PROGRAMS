package pkg;

public class Count implements Runnable
{
   Thread mythread ;
   Count()
   { 
      mythread = new Thread(this, "my runnable thread");
     // System.out.println("my thread created" + mythread);
      mythread.start();
   }
   public void run()
   {
      try
      {
        for (int i=0 ;i<10;i++)
        {
          System.out.println("Printing the count " + "talha");
          Thread.sleep(500);
        }
     }
     catch(InterruptedException e)
     {
        System.out.println("my thread interrupted");
     }
     System.out.println("mythread run count is over" );
   }
}
class RunnableExample
{
    public static void main(String args[])
    {
    	Another an=new Another();
       Count cnt = new Count();
       try
       {
          while(cnt.mythread.isAlive())
          {
              Thread.sleep(1000);

            System.out.println("Main thread will be alive till the child thread is live"); 
          }
       }
       catch(InterruptedException e)
       {
          System.out.println("Main thread interrupted");
       }
       System.out.println("Main thread run is over" );
    }
}
