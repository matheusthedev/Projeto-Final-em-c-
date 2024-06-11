//Matheus Reis
//Erik Meneghetti
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

void desenhoBoasVindas(){
    cout << "  \t  --------------------------------  \n";
    cout << "  \t |                                | \n";
    cout << "  \t |     Bem Vindo ao programa      | \n";
    cout << "  \t |              de                | \n";
    cout << "  \t |       Passagens Aereas         | \n";
    cout << "  \t |                                | \n";
    cout << "  \t  --------------------------------  \n";
   
}

void desenhoMenu(){

    cout << "  \t  --------------MENU-------------- \n";
    cout << "  \t |                                | \n";
    cout << "  \t |  Escolha uma Opcao:            | \n";
    cout << "  \t |      1) Cadastrar Passagem     | \n";
    cout << "  \t |      2) Listar Passagens       | \n";
    cout << "  \t |      0) Sair                   | \n";
    cout << "  \t |                                | \n";
    cout << "  \t  -------------MENU---------------  \n";
    cout << "Opcao: ";
}

    void limpaBufferDoCin()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    vector<string> passageiros;
    vector<string> origens;
    vector<string> destinos;
    vector<string> datas;

    void cadastrarPassagem(){
        string nome, origem, destino, dataViagem;
        limpaBufferDoCin();
        cout << "Digite o nome do passageiro: ";
        getline(cin, nome);
        cout << endl;
        cout << "Qual o local de origem: ";
        
        getline(cin, origem);
        cout << endl;
        
        cout << "Informe seu destino: ";
        getline(cin, destino);
        cout << endl;
        
        cout << "Informe a data da viagem: ";
        getline(cin, dataViagem);
        cout << endl;

        cout << "Passagem cadastrada com sucesso :)" << endl;

        passageiros.push_back(nome);
        origens.push_back(origem);
        destinos.push_back(destino);
        datas.push_back(dataViagem);

    }

    void listarPassagens(){

      limpaBufferDoCin();
       cout << " \t---------------------------------  \n";
    cout << "  \t |                                 | \n";
    cout << "  \t |     Bem Vindo ao programa       | \n";
    cout << "  \t |              de                 | \n";
    cout << "  \t |       Lista de Passageiros      | \n";
    cout << "  \t |                                 | \n";
    cout << "  \t  ---------------------------------  \n";
    cout << endl;
    cout << endl;

    cout << "Quantidade de passagens: " << passageiros.size() << endl << endl;

    for (int i = 0; i < passageiros.size(); i++)
    {
        cout << "Nome: " << passageiros[i] << endl ;
        cout << "Origem: " << origens[i] << endl ;
        cout << "Destino: " << destinos[i] << endl;
        cout << "Data: " << datas[i] << endl << endl ;
    }
    
    }

int main()
{
    
    system("cls");
    int opcao = -1;
    string continua;
    desenhoBoasVindas();


    do  {
        
    desenhoMenu();
    cin >> opcao;
    cout << endl;
    
    switch (opcao)
    {
    case 0:
    cout << "Voce escolheu a opcao sair do programa\n";
        break;
    case 1:
    cout << "Voce escolheu a opcao Cadastrar passagem\n";
    cadastrarPassagem();
        break;
    case 2:
    cout << "Voce escolheu a opcao listar passagens\n";
    listarPassagens();
        break;
    
    default:
        cout << "Opcao Invalida\n";
        break;
    }

    } while (opcao != 0);
    system ("cls");
    cout << "Obrigado por utilizar o programa :) \n\n";
    
   
    return 0;
}