package polymor;

public abstract class Human 
{
	 String name;
	Human()
	{
		name="jon";
	}
	public void show()
	{
		System.out.println("hahahaha");
	}
	abstract public void behave();
	abstract public void like();
}

 class Main
{
	public static void main(String[] args)
	{
		
		Shoping_Mall s_m=new Shoping_Mall();
		Bus B=new Bus();
		School S=new School();
		Home H=new Home();
		
		Human h=(Human)s_m;
		h.behave();
		h.like();
		s_m.show();
		h=B;
		h.behave();
		h.like();
		h.show();
		h=S;
		h.behave();
		h.like();
		h.show();
		h=H;
		h.behave();
		h.like();
		h.show();
		
	};
}