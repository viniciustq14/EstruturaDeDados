class Bateria{
    private carga: number

    constructor (carga:number){
      this.carga = carga
    }

    public getCarga(){
      return this.carga
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

  public constructor(identficador: number, nomeUsuario: string, b: Bateria){
    this.identficador = identficador
    this.nomeUsuario = nomeUsuario
    this.b = b
  }

  public carregar(){
    this.b.carregar();
}
  public descarregar(){
    this.b.descarregar();
}
  public setB(b: Bateria){//Possivel troca de bateria.
    this.b = b
  }

  public getCarga(){
    return this.b.getCarga()
  }

  public getNomeUsuario(){
    return this.nomeUsuario;
  }
  public getIdentficador(){
    return this.identficador
  }

  public getEstadoCelular(){
    if(this.estadoCelular == false){
      return "Desligado"
    }else{
      return "Ligado"
    }
  }

  public ligarCelular(){
    if(this.getEstadoCelular() == "Desligado"){
      if(this.b.getCarga() >= 20){
          this.estadoCelular = !this.estadoCelular
          console.log("Celular ligado")
          console.log(this.getNomeUsuario())
          this.descarregar()//20 Unidades de bateria
          this.descarregar()
      }else if(this.b.getCarga()< 20 && this.b.getCarga() > 0){
        this.estadoCelular = !this.estadoCelular
        console.log("Celular ligado")
        console.log(this.getNomeUsuario())
        console.log("Bateria Fraca")
      }
    }
  }

  public desligarCelular(){
    if(this.getEstadoCelular() == "Ligado"){
      this.estadoCelular = !this.estadoCelular
        if(this.b.getCarga() >= 20){
          console.log("Falow!")
        }
      this.b.descarregar()
    }
  }
  public tocarSom(){
    if(this.b.getCarga() > 10){
      console.log("Tocando som!")
    }
  }

}


let b1 = new Bateria(15)
let b2 = new Bateria(100)

let c1 = new Celular(10, "mkleamnn", b1)

console.log(`Estado atual do celular: ${c1.getEstadoCelular()}`)
console.log(`Carga atual: ${c1.getCarga()}`)
c1.ligarCelular()
console.log(`Estado atual do celular: ${c1.getEstadoCelular()}`)
console.log(`Carga atual: ${c1.getCarga()}`)

console.log("  ")
console.log("TROCA DE BATERIA")
console.log("  ")

c1.setB(b2)
console.log(`Estado atual do celular: ${c1.getEstadoCelular()}`)
console.log(`Carga atual: ${c1.getCarga()}`)
c1.desligarCelular()
console.log(`Estado atual do celular: ${c1.getEstadoCelular()}`)
console.log(`Carga atual: ${c1.getCarga()}`)
