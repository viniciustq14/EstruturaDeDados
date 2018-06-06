import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class AtletaDAO {
	private Connection conn;
	
	public AtletaDAO()throws SQLException{
		conn=ConnectionFactory.getConnection();
	}
	
	public void dropAtleta() throws SQLException{
		String sql="DROP TABLE Atleta;";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
	
	public void createAtleta() throws SQLException{
		String sql="CREATE TABLE Atleta "
				+ "(id serial CONSTRAINT key PRIMARY KEY, "
				+ "nome varchar(30), "
				+ "categoria varchar(15),"
				+ "idade integer );";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
	
	public void insertAtleta(Atleta a)throws SQLException{
		String sql="INSERT INTO Atleta (nome,categoria,idade) VALUES (?,?,?);";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.setString(1, a.getNome());
		ps.setString(2, a.getCategoria().toString());
		ps.setInt(3, a.getIdade());
		ps.execute();
	}
}
