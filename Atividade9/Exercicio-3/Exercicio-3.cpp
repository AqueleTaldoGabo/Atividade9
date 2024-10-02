#include <iostream>
using namespace std;

void Printar(int *p);

int main(){
    int x=69, *p;
    p = &x;

    Printar(p);
    p-=140;
    Printar(p);

    return 0;
}

void Printar(int *p){
    cout << *p << endl;
    cout << p << endl << endl;
}