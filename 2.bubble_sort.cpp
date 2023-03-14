#include <iostream>

using namespace std;
// 1 10 5 8 7 6 4 3 2 9


int main(){
    int N = 10;
    int i, j, temp;
    int array[N];

    for(i=0;i<N;i++){
        cin >> array[i];
    }

    for(i=0; i<N; i++){
        for(j=0; j<(N-1)-i; j++){
            if(array[j] > array[j+1]){ 
                // 현재 인덱스와 바로 뒤에있는 데이터의 크기를 비교해서 뒤에있는 수가 더 작으면 앞에있는 데이터와 위치를 바꿈
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }

        }
    }

    for(int i: array){
        cout << i << " ";
    }

    return 0;
}