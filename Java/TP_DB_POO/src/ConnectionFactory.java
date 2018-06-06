import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConnectionFactory {
	public static Connection getConnection () throws SQLException{
		//postgresql:localhost:5432
		//200.144.12.218
		return DriverManager.getConnection("jdbc:postgresql://10.66.32.4:5103/postgres", "postgres", "123");
	}
}
