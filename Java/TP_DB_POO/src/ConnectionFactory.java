import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConnectionFactory {
	public static Connection getConnection () throws SQLException{
		//postgresql:localhost:5432
		//200.144.12.218
		//_B"jdbc:postgresql://10.66.32.4:5103/postgres"
		//_V"jdbc:postgresql://10.66.32.4:5103/postgres"
		return DriverManager.getConnection("jdbc:postgresql://200.144.12.218:5103:5432/postgres", "postgres", "123");
	}
}
