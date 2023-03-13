#include <iostream>

using namespace std;
// 1 10 5 8 7 6 4 3 2 9
// 1 10 5 8 7 6 4 3 2 9



int main(){
    int N=10;
    int i, j, temp, array[10];

    for(i=0;i<N;i++){
        cin >> array[i];
    }

    for(i=1; i<N; i++){
        temp = array[i];
        for(j=(i-1); j>=0; j--){
            if(temp > array[j]){
                break;
            }
            array[j+1] = array[j];
        }
        array[j+1] = temp;
    }

    for(int i: array){
        cout << i << " ";
    }

    return 0;
}
