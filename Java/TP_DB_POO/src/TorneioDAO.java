import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class TorneioDAO {
	private Connection conn;
	
	public TorneioDAO()throws SQLException{
		conn=ConnectionFactory.getConnection();
	}
	
	public void dropTorneio() throws SQLException{
		String sql="DROP TABLE Torneio;";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
	
	public void createTorneio() throws SQLException{
		String sql="CREATE TABLE Torneio "
				+ "(id serial CONSTRAINT key PRIMARY KEY, "
				+ "nome varchar(30), "
				+ "local varchar(50));";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
	
	public void insertTorneio(Torneio t)throws SQLException{
		String sql="INSERT INTO Torneio (nome,local) VALUES (?,?);";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.setString(1, t.getEtapa());
		ps.setString(2, t.getLocal());
		ps.execute();
	}
}
