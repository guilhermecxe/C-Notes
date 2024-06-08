#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

unsigned int binary_to_decimal(int *binary){
    unsigned int result = 0;
    int bit;

    for(int i=0; i<32; i++){
        bit = binary[i];
        result += bit ? bit * pow(2, i) : bit; // calcular a potência apenas se o bit for 1
    }

    return result;
}

int* mofiz_sum(unsigned int a, unsigned int b){
    unsigned int lsb_a, lsb_b;
    int *result_in_bytes = new int[32];

    for(int i=0; i<32; i++){
        lsb_a = a & 1;
        lsb_b = b & 1;
        result_in_bytes[i] = lsb_a ^ lsb_b;
        a >>= 1;
        b >>= 1;
    }
    return result_in_bytes;
}

int main(){
    // "unsigned int" suporta valores de 32 bits positivos,
    // "int" comporta os positivos e negativos em 32 bits
    unsigned int number1, number2;
    int *binary_result;
    vector<unsigned int> decimal_results;

    while(cin >> number1 >> number2){
        binary_result = mofiz_sum(number1, number2);
        decimal_results.push_back(binary_to_decimal(binary_result));
    }
    
    for(int i=0; i<decimal_results.size(); i++)
        cout << decimal_results.at(i) << endl;

    return 0;
}