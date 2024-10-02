#include <iostream>
using namespace std;

void Printar();

int main(){
    Printar();
    Printar();
    Printar();
    Printar();
    Printar();
    Printar();

    return 0;
}

void Printar(){
    static int x=0;
    x++;
    cout << x << endl;
}