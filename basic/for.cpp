#include <iostream>

using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        cout << i << endl;
    }

    cout << endl;

    // Iterando sobre um array
    int nums[] = {1, 2, 5, 7, 3};
    for(int i=0; i<5; i++){
        cout << nums[i] << endl;
    }

    return 0;
}