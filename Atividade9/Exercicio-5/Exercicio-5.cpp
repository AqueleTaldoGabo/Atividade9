#include <iostream>
using namespace std;

void Printar(int *p);
bool Comparacao(int *pX, int *pY);

int main(){
    int x = 14, y=96;
    int *pX = &x, *pY = &y;

    Printar(pX);
    Printar(pY);

    if(Comparacao(pX, pY)){
        cout << "Inguais" << endl;
    }
    else{
        cout << "Nao inguais" << endl;
    }

    return 0;
}

bool Comparacao(int *pX, int *pY){
    return (pX == pY? true : false);
}

void Printar(int *p){
    cout << *p << endl;
    cout << p << endl << endl;
}