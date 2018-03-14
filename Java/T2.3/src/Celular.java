public class Celular {
    private Integer identficador;
    private String nomeUsuario;
    Bateria b;
    private boolean estadoCelular = false;

    public Celular(Integer identficador, String nomeUsuario) {
        this.identficador = identficador;
        this.nomeUsuario = nomeUsuario;
    }


    public Integer getIdentficador() {
        return identficador;
    }

    public String getNomeUsuario() {
        return nomeUsuario;
    }

    public void setB(Bateria b) {
        this.b = b;
    }

    public boolean getEstadoCelular() {
        return estadoCelular;
    }

    public void setEstadoCelular(boolean estadoCelular) {
        this.estadoCelular = estadoCelular;
    }

    public void ligarCelular() {
        if(getEstadoCelular() == false) {
            if (b.getCarga() >= 20) {
                setEstadoCelular(true);
                System.out.println("Celular ligado!");
                System.out.println("mklemann!");
                System.out.println("Matheus Klemann!");
                b.setCarga(b.getCarga() - 20);
            } else if (b.getCarga() < 20 && b.getCarga() > 0) {
                setEstadoCelular(true);
                System.out.println("Celular ligado!");
                System.out.println("mklemann!");
                System.out.println("Matheus Klemann!");
                System.out.println("Bateria Fraca!");
            }
        }
    }

    public void desligarCelular(){
        if(getEstadoCelular() == true) {
            setEstadoCelular(false);
            if (b.getCarga() >= 20)
                System.out.println("Falow!");
            b.setCarga(b.getCarga() - 10);
        }
    }

    public void tocarSom(){
        if(b.getCarga() > 10){
            System.out.println("Tocando som!");
        }
    }


}
