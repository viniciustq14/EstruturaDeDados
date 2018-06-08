import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class TorneioDAO {
	private Connection conn;
	
	public TorneioDAO()throws SQLException{
		conn=ConnectionFactory.getConnection();
	}
	
	public void dropTorneio() throws SQLException{
		try{
		String sql="DROP TABLE Torneio;";
		PreparedStatement ps=conn.prepareStatement(sql);
		ps.execute();
		}catch(Exception e){
			System.out.println(e.toString());
		}
		
		
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
	
	public Torneio listarUmTorneio(int id) throws SQLException {
		String sql = "SELECT * from Torneio WHERE id=?;";
		PreparedStatement ps = conn.prepareStatement(sql);
		ps.setInt(1, id);
		ResultSet rs = ps.executeQuery();
		return new Torneio(rs.getInt("id"), rs.getString("nome"), rs.getString("local"));
	}
	
	public void listar() throws SQLException {
		String sql = "SELECT * from Torneio;";
		PreparedStatement ps = conn.prepareStatement(sql);
		ResultSet rs = ps.executeQuery();
		while(rs.next()) {
			System.out.println("\n Codigo do Torneio : "+rs.getObject("id"));
			System.out.println("Nome do Torneio : "+rs.getObject("nome"));
			System.out.println("Localização : "+rs.getObject("local"));
		}
	}
	
	public void deletarTorneio(int id) throws SQLException {
		String sql = "DELETE from Torneio WHERE id=?;";
		PreparedStatement ps = conn.prepareStatement(sql);
		ps.setInt(1, id);
		ps.execute();
		ps.close();
	}
	
	public void alterarLocalTorneio(int id, String local) throws SQLException {
		String sql = "UPDATE from Cliente SET local=? WHERE id=?;";
		PreparedStatement ps = conn.prepareStatement(sql);
		ps.setString(1, local);
		ps.setInt(2, id);
		ps.execute();
		ps.close();
	}
}
