import java.util.ArrayList;
import java.util.Scanner;

public class teste {
    public static void main(String[] args) {
        ArrayList<clienteVip> cliVips = new ArrayList<clienteVip>();
        ArrayList<clienteRegular> cliRegular = new ArrayList<clienteRegular>();
        ArrayList<clientePremium> cliPremium= new ArrayList<clientePremium>();

        int op = 10;
        Scanner ler = new Scanner(System.in);

        for(int i = 0; i< cliVips.size(); i++){
            System.out.println(cliVips.get(i).getNome());
            System.out.println(cliVips.get(i).calcularTarifa());
        }

        while(op != 9){
            System.out.println("1 - Verificar tarifas e cadastrar cliete vip. ");
            System.out.println("2 - Verificar tarifas e cadastrar cliete regular. ");
            System.out.println("3 - Verificar tarifas e cadastrar cliete premium. ");
            System.out.println("4 - Mostrar tarifas gerais. ");
            System.out.println("9 - Sair. ");
            System.out.print("Escolha uma opcao: ");
            op = ler.nextInt();

            switch (op){
                case 1:
                    System.out.print("Digite o nome do cliente: ");
                    String nomeVip = ler.next();
                    System.out.print("Digite o saldo da conta do cliente: ");
                    double saldoVip = ler.nextInt();

                    if(cliVips.add(new clienteVip(nomeVip, saldoVip))){
                        System.out.println(" ");
                        System.out.println("Cliente inserido com sucesso!");
                        System.out.println(" ");

                    }else{
                        System.out.println("Falha na insercao");
                    }

                    for(clienteVip c : cliVips){
                        System.out.println("Nome cliente vip: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                        System.out.println(" ");

                    }

                    break;
                case 2:
                    System.out.print("Digite o nome do cliente: ");
                    String nomeRegular = ler.next();
                    System.out.print("Digite o saldo da conta do cliente: ");
                    double saldoRegular = ler.nextInt();

                    if(cliRegular.add(new clienteRegular(nomeRegular, saldoRegular))){
                        System.out.println("Cliente inserido com sucesso!");
                        System.out.println(" ");
                    }else{
                        System.out.println("Falha na insercao");
                    }

                    for(clienteRegular c : cliRegular){
                        System.out.println("Nome cliente regular: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                        System.out.println(" ");
                    }

                    break;
                case 3:
                    System.out.print("Digite o nome do cliente: ");
                    String nomePremium = ler.next();
                    System.out.print("Digite o saldo da conta do cliente: ");
                    double saldoPremium = ler.nextInt();

                    if(cliPremium.add(new clientePremium(nomePremium, saldoPremium))){
                        System.out.println("Cliente inserido com sucesso!");
                        System.out.println(" ");
                    }else{
                        System.out.println("Falha na insercao");
                    }

                    for(clientePremium c : cliPremium){
                        System.out.println("Nome cliente regular: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                        System.out.println(" ");
                    }


                case 4:
                    for(clienteVip c : cliVips){
                        System.out.println("Nome cliente vip: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                    }
                    System.out.println(" ");
                    for(clienteRegular c : cliRegular){
                        System.out.println("Nome cliente regular: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                    }
                    System.out.println(" ");
                    for(clientePremium c : cliPremium){
                        System.out.println("Nome cliente premium: " + c.getNome());
                        System.out.println("Tarifa do cliente: " + c.calcularTarifa());
                    }
                    System.out.println(" ");



                default:
                    System.out.println("Fim");
                    break;
            }
        }


    }
}
