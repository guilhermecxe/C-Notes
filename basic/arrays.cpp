#include <iostream>

using namespace std;

int main(){
    int lucky_numbers[] = {4, 8, 15, 16, 23, 42};
    cout << lucky_numbers[0] << endl;
    lucky_numbers[0] = 19;
    cout << lucky_numbers[0] << endl;

    // Podemos criar um array com tamanho N,
    // mas especificar menos que N na declaração
    int array1[20] = {5, 6, 10, 11};
    array1[4] = 1;
    cout << array1[4] << endl;
    cout << array1[5] << endl;

    return 0;
}