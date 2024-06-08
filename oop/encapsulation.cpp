#include <iostream>

using namespace std;

class Employee{
    private:
        string name;
        string company;
        int age;

    public:
        void set_name(string name_){
            name = name_;
        }

        string get_name(){
            return name;
        }

        void set_company(string company_){
            company = company_;
        }

        string get_company(){
            return company;
        }

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


};

int main(){
    Employee employee1 = Employee("Saldina", "YT - CodeBeauty", 25);
    employee1.introduce_yourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.introduce_yourself(); 

    employee1.set_age(39);
    employee1.introduce_yourself();

    return 0;
}