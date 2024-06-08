#include <iostream>

using namespace std;

string get_day_of_week(int day_num){
    string day_name;
    switch(day_num){
        case 0:
            day_name = "Sunday";
            break;
        case 1:
            day_name = "Monday";
            break;        
        default:
            day_name = "I don't know";
    }
    return day_name;
}

int main(){
    cout << get_day_of_week(3) << endl;

    return 0;
}