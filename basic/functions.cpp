#include <iostream>

using namespace std;

void say_hi(){
    cout << "Hello, user!" << endl;
}

void say_two_things(string word, int number){
    cout << word << " and " << number << endl;
}

void say_bye(string name){
    cout << "Bye, " << name << endl;
}

double cube(double base){
    return base * base * base;
}

int main(){
    say_hi();
    say_bye("Robot");
    say_two_things("Lion", 11);

    cout << cube(2) << endl;
    cout << cube(2.5) << endl;

    return 0;
}