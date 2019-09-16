#include <iostream>
using namespace std;

int main() {
    char x;
    int n;
    cout<<"Ingrese coordenadas:\n";
    cin>>x>>n;
    if(x == 97 || x == 99 || x ==101 || x== 103){
        if(n%2 != 0){
            cout<<"negro";
        }
        else
            cout<<"blanco";
    }
    else
        if(n % 2 == 0) {
            cout<<"negro";
        }
        else
            cout<<"blanco";
    return 0;
}
