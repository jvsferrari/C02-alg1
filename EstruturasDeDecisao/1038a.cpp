#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo;
    int quantidade;
    double preco;

    cin >> codigo >> quantidade;

    if(codigo == 1){
        preco = 4;
    }
    else if (codigo == 2)
    {
        preco = 4.5;
    }
    else if (codigo == 3)
    {
        preco = 5;
    }
    else if (codigo == 4)
    {
        preco = 2;
    }
    else if (codigo == 5)
    {
        preco = 1.5;
    };
    double total;

    total = preco * quantidade;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
}