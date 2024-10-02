#include <iostream>
using namespace std;

int SubDoisPonteiros(int *pX, int *pY);
void Printar(int *p);

int main(){
    int x = 10, y = 23;
    int *pX = &x, *pY = &y;

    Printar(pX);
    Printar(pY);

    cout << SubDoisPonteiros(pX, pY) << endl;

    return 0;
}

void Printar(int *p){
    cout << *p << endl;
    cout << p << endl << endl;
}

int SubDoisPonteiros(int *pX, int *pY){
    return pX - pY;
}