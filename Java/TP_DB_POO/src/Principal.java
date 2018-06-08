import java.sql.SQLException;

public class Principal {

	public static void main(String[] args)throws  SQLException {
		// TODO Auto-generated method stub
		try{
			TorneioDAO t= new TorneioDAO();
			t.createTorneio();
			System.out.println("Fim");
		}catch(SQLException e){
			System.out.println(e.toString());
		}
	}

}
