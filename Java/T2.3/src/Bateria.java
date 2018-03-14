public class Bateria {
    private Integer carga;

    public Bateria(Integer carga) {
        this.carga = carga;
    }

    public Integer getCarga() {
        return carga;
    }

    public void setCarga(Integer carga){
        this.carga = carga;
    }

    public void carregar(){
        carga = carga + 5;
    }
    public void descarregar(){
        carga = carga - 10;
    }

}
