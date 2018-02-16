package polymor;

public class Bus extends Human
{

	@Override
	public void behave() {
		// TODO Auto-generated method stub
		System.out.println(name +" act like a pessenger");
	}

	@Override
	public void like() {
		// TODO Auto-generated method stub
		System.out.println(name +" like bus");
		
	}
	public void show()
	{
		super.show();
	}
	
}