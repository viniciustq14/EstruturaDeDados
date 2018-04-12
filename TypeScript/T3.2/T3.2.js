/**Exercício 1.2. Sabe-se que VIP, Premium e Regular são tipos de Cliente.
Em cada cliente, há a necessidade de controle de conta corrente.
Em uma conta, há dados como nome, e saldo. Para cada tipo de conta
uma tarifa deve ser calculada: 1% do saldo para Regular, 2% para Premium
e 4% para VIP. Use Herança. Aqui, fica proíbido usar conceitos
que não foram vistos em aula.
-Esboce um diagrama de classes.
-Implemente as classes e seus métodos.
-Crie um pequeno menu para cadastrar clientes e vericar o valor
das tarifas.*/
var __extends = (this && this.__extends) || (function () {
    var extendStatics = Object.setPrototypeOf ||
        ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
        function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
var Cliente = /** @class */ (function () {
    function Cliente(nome, saldo) {
        this._nome = nome;
        this._saldo = saldo;
    }
    Object.defineProperty(Cliente.prototype, "nome", {
        get: function () {
            return this._nome;
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(Cliente.prototype, "saldo", {
        get: function () {
            return this._saldo;
        },
        enumerable: true,
        configurable: true
    });
    return Cliente;
}());
var clienteVip = /** @class */ (function (_super) {
    __extends(clienteVip, _super);
    function clienteVip(nome, saldo) {
        var _this = _super.call(this, nome, saldo) || this;
        _this._tarifa = 0.04;
        return _this;
    }
    Object.defineProperty(clienteVip.prototype, "tarifa", {
        get: function () {
            return this._tarifa;
        },
        enumerable: true,
        configurable: true
    });
    clienteVip.prototype.calcularTarifa = function () {
        return this.tarifa * this.saldo;
    };
    return clienteVip;
}(Cliente));
var clienteRegular = /** @class */ (function (_super) {
    __extends(clienteRegular, _super);
    function clienteRegular(nome, saldo) {
        var _this = _super.call(this, nome, saldo) || this;
        _this._tarifa = 0.01;
        return _this;
    }
    Object.defineProperty(clienteRegular.prototype, "tarifa", {
        get: function () {
            return this._tarifa;
        },
        enumerable: true,
        configurable: true
    });
    clienteRegular.prototype.calcularTarifa = function () {
        return this.tarifa * this.saldo;
    };
    return clienteRegular;
}(Cliente));
var clientePremium = /** @class */ (function (_super) {
    __extends(clientePremium, _super);
    function clientePremium(nome, saldo) {
        var _this = _super.call(this, nome, saldo) || this;
        _this._tarifa = 0.02;
        return _this;
    }
    Object.defineProperty(clientePremium.prototype, "tarifa", {
        get: function () {
            return this._tarifa;
        },
        enumerable: true,
        configurable: true
    });
    clientePremium.prototype.calcularTarifa = function () {
        return this.tarifa * this.saldo;
    };
    return clientePremium;
}(Cliente));
var list = [];
var op = 10;
while (op != 9) {
    console.log("1 - Verificar tarifas e cadastrar cliente vip.");
    console.log("2 - Verificar tarifas e cadastrar cliente regular.");
    console.log("3 - Verificar tarifas e cadastrar cliente premium.");
    console.log("4 - Verificar tarifas gerais.");
    prompt("DSAD");
    console.log("9 - Sair.");
    console.log(op);
    switch (op) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            console.log("OP Errada!");
    }
}
console.log(list);
