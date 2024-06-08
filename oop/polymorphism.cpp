#include <iostream>

using namespace std;

class AbstractEmployee{
    virtual void ask_for_promotion() = 0;
};

class Employee:AbstractEmployee{
    private:
        string company;
        int age;

    protected: // atributos protegidos podem ser acessados por classes que herdam desta
        string name;

    public:
        void set_age(int age_){
            if(age_ >= 18)
                age = age_;
        }

        int get_age(){
            return age;
        }

        string get_name(){
            return name;
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

        void work(){
            cout << name << " is checking email, task backlog, performing tasks..." << endl;
        }

};

class Developer: public Employee{ // public faz os métodos publicos da herdada ficarem publicos em relação a esta classe também
    public:
        string favorite_programming_language;

        Developer(string name_, string company_, int age_, string favorite_programming_language_)
            :Employee(name_, company_, age_){ // usando o construtor da classe herdada
                favorite_programming_language = favorite_programming_language_;
            }

        void fix_bug(){
            cout << name << " fixed bug using " << favorite_programming_language << endl;
        }

        void work(){
            cout << name << " is writting " << favorite_programming_language << " code" << endl;
        }
};

class Teacher: public Employee{
    public:
        string subject;

        void prepare_lesson(){
            cout << name << " is preparing " << subject << " lesson" << endl;
        }

        Teacher(string name_, string company_, int age_, string subject_)
            :Employee(name_, company_, age_){
                subject = subject_;
            }

};

int main(){
    Developer d = Developer("Alicia", "Amazon", 28, "Java");
    Teacher t = Teacher("Jack", "School", 35, "Histoy");

    // Uma habilidade do polimorfismo é modificar um método herdado.
    // Apesar de Developer e Teacher herdarem de Employee,
    // o método de Developer foi modificado.

    d.work();
    t.work();

    // Uma classe ancestral pode também ser usada para guardar uma instância
    // de uma classe que a herda
    Employee *e = &d;
    e->work(); // nesse caso o método executado é o classe ancestral
    // para fazer esse método funcionar com o método de Developer, precisamos tornar
    // o método de Employee "virtual"
    // ou podemos fazer:
    ((Developer*) e)->work();

    return 0;
}