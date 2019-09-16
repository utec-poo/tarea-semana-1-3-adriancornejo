#include <iostream>
using namespace std;

int main() {
    cout << "Ingrese la zona: \n";
    cout<<"1: Super VIP\n"<<"2: VIP\n"<<"3: Preferencial\n"<<"4: General\n";
    int opcion = 0;
    int p = 0;
    cin >> opcion;

    switch(opcion)
    {
        case 1: cout << "¿Es cliente claro?\n"<<"1: Sí\n"<<"2: No\n";
        cin>>p;
        if(p==1){
            cout<<"El precio es de 169.6 soles";
        }
        else
            cout<<"El precio es de 212 soles";
            break;
        case 2: cout << "¿Es cliente claro?\n"<<"1: Sí\n"<<"2: No\n";
        cin>>p;
        if(p==1){
            cout<<"El precio es de 136 soles";
        }
        else
            cout<<"El precio es de 170 soles";
            break;
        case 3: cout << "¿Es cliente claro?\n"<<"1: Sí\n"<<"2: No\n";
        cin>>p;
        if(p==1){
            cout<<"El precio es de 108.8 soles";
        }
        else
            cout<<"El precio es de 136 soles";
            break;
        case 4: cout << "¿Es cliente claro?\n"<<"1: Sí\n"<<"2: No\n";
        cin>>p;
        if(p==1){
            cout<<"El precio es de 47.2 soles";
        }
        else
            cout<<"El precio es de 59 soles";
            break;
        default: cout << "No es una zona válida";
    }
    return 0;
}
