#include <iostream>

using namespace std;

int main(){
    bool is_male = false;
    bool is_tall = true;
    bool is_short = true;

    if(is_male && is_tall)
        cout << "You are a tall male" << endl;
    else if(is_male)
        cout << "You are a short male" << endl;
    else if(!is_male)
        cout << "You are not male" << endl;

    if(is_tall || is_short)
        cout << "You have height" << endl;
    else
        cout << "You don't have height " << endl;

    return 0;
}