#include <iostream>
#include <limits> // para usar numeric_limits

using namespace std;

int main(){
    int age;
    string name, lastname;

    cout << "Enter your age: ";
    cin >> age; // console in
    cout << "You are " << age << " years old" << endl;

    // Lendo uma string
    cout << "Enter your name: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // para ignorar a nova linha do input anterior
    getline(cin, name);
    cout << "Hello, " << name << endl;

    return 0;
}