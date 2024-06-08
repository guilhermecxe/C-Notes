#include <iostream>

using namespace std;

int main(){
    cout << "Hello, "; // Se omitirmos "endl" não é inserido um salto de linha no final
    cout << "human" << endl;

    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl; // tamanho da string
    cout << phrase[0] << endl; // obtendo um caracter pelo índice

    phrase[0] = 'B'; // alterando um caracter pelo índice
    cout << phrase << endl;

    cout << phrase.find('y') << endl; // encontrando um caracter dentro da string
    cout << phrase.find("Academy") << endl; // encontrando um trecho de texto dentro da string
    cout << phrase.find("Academy", 0) << endl; // começando a busca pelo índice especificado

    cout << phrase.substr(0, 7) << endl; // obtendo uma parte do texto pelos índices

    return 0;
}