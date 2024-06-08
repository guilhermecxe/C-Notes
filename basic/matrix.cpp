#include <iostream>

using namespace std;

int main(){
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    cout << matrix[0][0] << endl;

    // Iterando sob a matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}