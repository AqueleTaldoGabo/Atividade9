#include <iostream>
using namespace std;

int main(){
    int v[5];
    int *vP = v;

    for(int i = 0; i<5; i++){
        cin >> *(vP+i);
    }

    for(int i = 0; i<5; i++){
        cout << *(vP+i) << endl;
    }
    
}