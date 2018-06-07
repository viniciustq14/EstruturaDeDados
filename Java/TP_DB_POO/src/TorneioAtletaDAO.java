import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class TorneioAtletaDAO {
private Connection conn;
	
	public TorneioAtletaDAO()throws SQLException{
		conn=ConnectionFactory.getConnection();
	}
	
	public void dropTorneioAtleta() throws SQLException{
		String sql="DROP TABLE TorneioAtleta;";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
	
	public void createTorneio() throws SQLException{
		String sql="CREATE TABLE TorneioAtleta "
				+ "(id_torneio integer foreign key references Torneio(id) , "
				+ "id_atleta integer foreign key references Atleta(id),"
				+ "nota_atleta integet);";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		
	}
}
