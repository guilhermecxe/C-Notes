#include <iostream>

using namespace std;

// private: não é acessável de fora da classe
// public: acessável de fora da classe
// protected: um conceito entre private e public

class Employee{
    public: // se não especificado, por padrão, a variável é privada
        string name;
        string company;
        int age;

    void introduce_yourself(){
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }

    void print_age_adress(){
        cout << "Age original adress: " << &age << endl;
    }
};

int main(){
    Employee employee1;
    employee1.name = "Saldina";
    employee1.company = "YT - CodeBeauty";
    employee1.age = 25;
    employee1.introduce_yourself();

    Employee employee2;
    employee2.name = "John";
    employee2.company = "Amazon";
    employee2.age = 35;
    employee2.introduce_yourself();

    // Verificando se é o mesmo endereço dentro da classe e retornando da instância
    // Resposta: sim
    employee1.print_age_adress();
    cout << "Age from instance adress: " << &employee1.age << endl;

    return 0;
}