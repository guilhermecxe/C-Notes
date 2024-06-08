#include <iostream>
#include <cmath> // biblioteca de funções matemáticas

using namespace std;

int main(){
    cout << 10 % 3 << endl; // resto

    int number = 5;
    number++; // incrementando

    number += 10; // somando e atribuindo

    cout << 5.5 + 9 << endl; // é retornado um decimal

    cout << 10 / 3 << endl; // resultado inteiro
    cout << 10.0 / 3.0 << endl; // resultado decimal

    cout << 5 / 2 << endl; // arredonda para baixo

    // De cmath
    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.6) << endl;
    cout << floor(4.6) << endl;
    cout << fmax(3, 5) << endl;
    cout << fmin(3, 5) << endl;

    return 0;
}