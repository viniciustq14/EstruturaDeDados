class Bateria{
    private carga: number

    constructor (carga:number){
      this.carga = carga
    }

    public getCarga(){
      return this.carga
    }

    public setCarga(carga: number){
      this.carga = carga
    }

    public carregar(){
      this.carga = this.carga + 5
    }

    public descarregar(){
      this.carga = this.carga - 10
    }

}

class Celular{
  private identficador: number
  private nomeUsuario: string
  private estadoCelular: boolean = false
  private b: Bateria

  constructor(identficador: number, nomeUsuario: string){
    this.identficador = identficador
    this.nomeUsuario = nomeUsuario
  }
  public getIdentficador(){
    return this.identficador
  }
  public setB(b: Bateria){
    this.b = b
  }
  public getEstadoCelular(){
    if(this.estadoCelular == false){
      return "Desligado"
    }else{
      return "Ligado"
    }
  }

  public setEstadoCelular(estadoCelular:boolean){
    this.estadoCelular = estadoCelular
  }

  public ligarCelular(){
    if(this.getEstadoCelular() == "Desligado"){
      if(this.b.getCarga() >= 20){
          this.setEstadoCelular(true)
          console.log("Celular ligado")
          console.log("mklemann - Matheus Klemann")
          this.b.setCarga(this.b.getCarga() - 20)
      }else if(this.b.getCarga()< 20 && this.b.getCarga() > 0){
        this.setEstadoCelular(true)
        console.log("Celular ligado")
        console.log("mklemann - Matheus Klemann")
        console.log("Bateria Fraca")
      }
    }
  }
  public desligarCelular(){
    if(this.getEstadoCelular() == "Ligado"){
      this.setEstadoCelular(false)
      if(this.b.getCarga() >= 20){
        this.b.setCarga(this.b.getCarga() - 10)
        console.log("Falow!")
      }
      console.log("Falow!")
    }
  }
  public tocarSom(){
    if(this.b.getCarga() > 10){
      console.log("Tocando som!")
    }
  }


}

var b = new Bateria(10)
var c = new Celular(1, "matheus")

c.setB(b)
console.log(b.getCarga())
c.ligarCelular()
console.log(b.getCarga())
c.desligarCelular()
console.log(b.getCarga())
console.log(c.getEstadoCelular())

