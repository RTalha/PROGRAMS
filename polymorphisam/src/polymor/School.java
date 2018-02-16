package polymor;

public class School extends Human
{

	@Override
	public void behave() {
		// TODO Auto-generated method stub
		System.out.println(name +" act like a student");
	}

	@Override
	public void like() {
		// TODO Auto-generated method stub
		System.out.println(name +" like school");
	}
	public void show()
	{
		super.show();
	}
}