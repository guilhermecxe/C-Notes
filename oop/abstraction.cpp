#include <iostream>

using namespace std;

class AbstractEmployee{
    // Esta é uma classe abstrata
    // outras que usarem esta classe terão que ter uma implementação deste método:
    virtual void ask_for_promotion() = 0;
    // virtual: permite que as classes que herdam esta possam modificar este método
    // = 0: indica que esta função deve ser implementa nas classes que a herdam
};

class Employee:AbstractEmployee{
    private:
        string name;
        string company;
        int age;

    public:
        void set_age(int age_){
            if(age_ >= 18)
                age = age_;
        }

        int get_age(){
            return age;
        }

        void introduce_yourself(){
            cout << "Name - " << name << endl;
            cout << "Company - " << company << endl;
            cout << "Age - " << age << endl;
        }

        Employee(string name_, string company_, int age_){
            name = name_;
            company = company_;
            age = age_;
        }

        void ask_for_promotion(){
            if(age > 30)
                cout << name << " got promoted!" << endl;
            else
                cout << name << ", sorry, no promotion for you!" << endl;
        }

};

int main(){
    Employee employee1 = Employee("Saldina", "YT - CodeBeauty", 25);
    employee1.ask_for_promotion();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.ask_for_promotion();

    return 0;
}