package pkg;

public class Another implements Runnable
{
	Thread mythread ;
	   Another()
	   { 
	      mythread = new Thread(this, "my runnable thread");
	     // System.out.println("my thread created" + mythread);
	      mythread.start();
	   }
	@Override
	public void run() {
		// TODO Auto-generated method stub
		
		for(int i=0;i<10;i++)
		{
			System.out.println("Printing the Another " +"khan");
			try {
				mythread.sleep(500);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		System.out.println("mythread run Another is over" );
	}
	

}
