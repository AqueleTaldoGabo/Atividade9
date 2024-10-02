#include <iostream>
using namespace std;

int xum = 40;
extern void PrintarXum();

int main(){
    cout << xum << endl;
    PrintarXum();
    cout << xum << endl;

    return 0;
}