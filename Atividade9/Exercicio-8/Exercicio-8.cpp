#include <iostream>
using namespace std;

void Registre();

int main(){
    for(int i = 0; i<9; i++){
        Registre();
    }
}

void Registre(){
    register int x;
    x++;
    cout << x << endl;
}