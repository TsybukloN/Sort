#include <iostream>
#include "Sort_lib.h"

using namespace std;

int main() {

    int m[10];

    cout << "Size: \n";
    short s;
    cin >> s;

    cout << "Enter massive: \n";
    for (short i = 0; i < s; i++) {
        cin >> m[i];
    }

    //isort(m,s);
    ssort(m,s);

    for (short i = 0;i < s;i++) {
        cout << m[i] << " ";
    }
    
}

