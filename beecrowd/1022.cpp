#include <iostream>
#include <vector>

using namespace std;

int greatest_common_denominator(int a, int b){
    int biggest;
    a = abs(a);
    b = abs(b);

    biggest = (a > b) ? a : b;
    for(int i=biggest; i>0; i--){
        if(((a % i) == 0) && (b % i) == 0)
            return i;
    }
    return 1;
}

class Equation{
    int numerator, denomitador;
    public:
        Equation(int numerator_, int denomitador_){
            numerator = numerator_;
            denomitador = denomitador_;
        }

        void simplify(){
            int gcd = greatest_common_denominator(numerator, denomitador);
            numerator = numerator / gcd;
            denomitador = denomitador / gcd;
        }

        void print(){
            cout << numerator << "/" << denomitador;
        }
};

Equation calculate(int n1, char op1, int d1, char op2, int n2, char op3, int d2){
    switch(op2){
        case '+':
            return Equation(n1*d2 + n2*d1, d1*d2);
        case '-':
            return Equation(n1*d2 - n2*d1, d1*d2);
        case '*':
            return Equation(n1*n2, d1*d2);
        case '/':
            return Equation(n1*d2, n2*d1);
        default:
            return Equation(0, 0);
    }
}

int main(){
    int n1, d1, n2, d2, n;
    char op1, op2, op3;
    vector<Equation> equations;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> n1 >> op1 >> d1 >> op2 >> n2 >> op3 >> d2;
        equations.push_back(calculate(n1, op1, d1, op2, n2, op3, d2));
    }

    for(int i=0; i<n; i++){
        equations.at(i).print();
        cout << " = ";
        equations.at(i).simplify();
        equations.at(i).print();
        cout << endl;
    }

    return 0;
}