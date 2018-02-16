package polymor;

public class Home extends Human
{

	@Override
	public void behave() {
		// TODO Auto-generated method stub
		System.out.println(name +" act like a child");
	}

	@Override
	public void like() {
		// TODO Auto-generated method stub
		System.out.println(name +" like a home");
	}
	public void show()
	{
		super.show();
	}
}
