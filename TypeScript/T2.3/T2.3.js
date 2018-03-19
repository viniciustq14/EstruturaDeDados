var Bateria = /** @class */ (function () {
    function Bateria(carga) {
        this.carga = carga;
    }
    Bateria.prototype.getCarga = function () {
        return this.carga;
    };
    Bateria.prototype.setCarga = function (carga) {
        this.carga = carga;
    };
    Bateria.prototype.carregar = function () {
        this.carga = this.carga + 5;
    };
    Bateria.prototype.descarregar = function () {
        this.carga = this.carga - 10;
    };
    return Bateria;
}());
var Celular = /** @class */ (function () {
    function Celular(identficador, nomeUsuario) {
        this.estadoCelular = false;
        this.identficador = identficador;
        this.nomeUsuario = nomeUsuario;
    }
    Celular.prototype.getIdentficador = function () {
        return this.identficador;
    };
    Celular.prototype.setB = function (b) {
        this.b = b;
    };
    Celular.prototype.getEstadoCelular = function () {
        if (this.estadoCelular == false) {
            return "Desligado";
        }
        else {
            return "Ligado";
        }
    };
    Celular.prototype.setEstadoCelular = function (estadoCelular) {
        this.estadoCelular = estadoCelular;
    };
    Celular.prototype.ligarCelular = function () {
        if (this.getEstadoCelular() == "Desligado") {
            if (this.b.getCarga() >= 20) {
                this.setEstadoCelular(true);
                console.log("Celular ligado");
                console.log("mklemann - Matheus Klemann");
                this.b.setCarga(this.b.getCarga() - 20);
            }
            else if (this.b.getCarga() < 20 && this.b.getCarga() > 0) {
                this.setEstadoCelular(true);
                console.log("Celular ligado");
                console.log("mklemann - Matheus Klemann");
                console.log("Bateria Fraca");
            }
        }
    };
    Celular.prototype.desligarCelular = function () {
        if (this.getEstadoCelular() == "Ligado") {
            this.setEstadoCelular(false);
            if (this.b.getCarga() >= 20) {
                this.b.setCarga(this.b.getCarga() - 10);
                console.log("Falow!");
            }
            console.log("Falow!");
        }
    };
    Celular.prototype.tocarSom = function () {
        if (this.b.getCarga() > 10) {
            console.log("Tocando som!");
        }
    };
    return Celular;
}());
var b = new Bateria(10);
var c = new Celular(1, "matheus");
c.setB(b);
console.log(b.getCarga());
c.ligarCelular();
console.log(b.getCarga());
c.desligarCelular();
console.log(b.getCarga());
console.log(c.getEstadoCelular());
