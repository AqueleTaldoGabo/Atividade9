#include <iostream>
using namespace std;

void Printar(int *p);

int main(){
    int x;
    int *p = &x;
    cin >> x;

    Printar(p);
    p++;
    Printar(p);
    p--;
    Printar(p);

    return 0;
}

void Printar(int *p){
    cout << *p << endl;
    cout << p << endl << endl;
}