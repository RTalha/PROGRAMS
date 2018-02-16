package ATM;

import java.sql.*;

import javax.swing.JOptionPane;

import com.mysql.jdbc.PreparedStatement;
public class Connector {
	private java.sql.PreparedStatement ps;
	private Connection cn;
	private Statement st;
	private ResultSet results;
	public void connect()
	{
		String constr="jdbc:mysql://127.0.0.1:3306/atm";
		cn=null;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			cn=DriverManager.getConnection(constr,"root","");
			//JOptionPane.showMessageDialog(null,"connected!");
		}catch(ClassNotFoundException e)
		{
			e.printStackTrace();
		}catch(SQLException e){
			JOptionPane.showMessageDialog(null, "Unable to connect"
					+ " to database ,\n Details:"+e);
		}
		
	}
	public String get(String Id,String Password) throws SQLException
	{
		String query = "SELECT id, password FROM user";
		st = cn.createStatement();
		
		ResultSet results = st.executeQuery(query);

        try {
        while (results.next()) {
        	
        	
        String id = results.getString("id");
        String password =  results.getString("password");

           if ((Id.equals(id)) && (Password.equals(password))) {

        	   results.close();
              return "TRUE";  
           }
        }
        
        }catch(SQLException SQL)
        {
        	System.out.println(SQL);
        }
        return "FALSE";
        
	}
	public void update(String Id,String amount)
	{
		System.out.println(Id+" "+amount);
		String query="UPDATE user SET amount='"+amount+"' WHERE id='"+Id+"'";
		try {
			st = cn.createStatement();
			st.execute(query);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	public void change_pin(String id,String password)
	{
		
		String query="UPDATE user SET password='"+password+"' WHERE id='"+id+"'";
		try {
			st= cn.prepareStatement(query);
			st.execute(query);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	public String get_pin(String Id) throws SQLException
	{
		String query = "SELECT password FROM user WHERE id='"+Id+"'";
		ps= cn.prepareStatement(query);
        ResultSet results = ps.executeQuery(query);

        try {
        while (results.next()) {
        	
        String pin =  results.getString("password");

        	   results.close();
              return pin;  
        }
        }catch(SQLException SQL)
        {
        	System.out.println(SQL);
        }
        return "FALSE";
		
	}
	public String get_name(String Id) throws SQLException
	{
		String query = "SELECT name FROM user WHERE id='"+Id+"'";
		ps= cn.prepareStatement(query);
        results = ps.executeQuery(query);

        try {
        while (results.next()) {
        	
        String name =  results.getString("name");

        	   results.close();
              return name;  
        }
        }catch(SQLException SQL)
        {
        	System.out.println(SQL);
        }
        return "FALSE";
		
	}

	
	public String get_amount(String Id) throws SQLException
	{String query = "SELECT amount FROM user WHERE id='"+Id+"'";
	st = cn.createStatement();
    results = st.executeQuery(query);

    try {
    while (results.next()) {
    	
    String amount =  results.getString("amount");
          return amount;  
    }
    }catch(SQLException SQL)
    {
    	System.out.println(SQL);
    }
    return "0";
		
	}
}
