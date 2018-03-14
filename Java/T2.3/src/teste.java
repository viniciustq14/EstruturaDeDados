public class teste {
    public static void main(String[] args) {
        Bateria b = new Bateria(9);
        Celular c = new Celular(10, "mklemann");
        c.setB(b);

        c.ligarCelular();
        System.out.println(b.getCarga());
        c.desligarCelular();
        System.out.println(b.getCarga());

        System.out.println(c.getEstadoCelular());
    }
}
