#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int greatest_common_divisor(int a, int b){
    // Euclidian method
    int q, r=1;
    
    if(b > a)
        swap(&a, &b);

    if((a == 0) | (b == 0))
        return 0;

    if((a % b) == 0)
        return b;

    while(r != 0){
        q = a / b;
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n, f1, f2;
    cin >> n;
    int results[n];

    for(int i=0; i<n; i++){
        cin >> f1 >> f2;
        results[i] = greatest_common_divisor(f1, f2);
    }

    for(int i=0; i<n; i++)
        cout << results[i] << endl;

    return 0;
}