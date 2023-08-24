#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    string historia = "Nossa historia começa com você sendo um ";
    cout<<"Quer ser fazendeiro ou mineiro"<<endl;
    cout<<"1-Fazendeiro 2-Mineiro"<<endl;
    cin>>opcao;
    system("clear||cls");
    if(opcao == 1){
        historia += " Fazendeiro";
        cout << historia;
    }else{
        historia += " Mineiro";
        cout << historia;
    }
    cout<<endl<<"Escolha uma opção"<<endl;
    cout<<"1-Revoltado 2-Bom"<<endl;
    cin>>opcao;
    system("clear||cls");
    if(opcao == 1){
        historia += " Revoltado";
        cout << historia;
    }else{
        historia += " Bom";
        cout << historia;
    }



    return 0;
}
