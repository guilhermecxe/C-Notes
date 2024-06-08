#include <iostream>

using namespace std;

class Employee{
    public:
        string name;
        string company;
        int age;

    Employee(string name_, string company_, int age_){
        // Não sei se o underscore é uma boa prática.
        // No tutorial foi usado letra maiúscula no início do nome da variável da class,
        // assim o nome dos parâmetros não estavam reservados
        name = name_;
        company = company_;
        age = age_;
    }

    void introduce_yourself(){
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }

};

int main(){
    Employee employee1 = Employee("Saldina", "YT - CodeBeauty", 25);
    employee1.introduce_yourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.introduce_yourself(); 

    return 0;
}