#include <iostream>

using namespace std;
// 1 10 5 8 7 6 4 3 2 9
int main(){
    int N = 10;

    int i, j, min, index, temp;
    int array[N];

    for(i = 0; i<N; i++){
        cin >> array[i];
    }

    for(i=0; i<N; i++){
        min = 9999;
        for(j=i; j<N; j++){
            if(array[j] < min ){
                min = array[j];  // 가장 작은 수를 찾기 위해 현재 인덱스까지의 가장 작은 값을 저장하는 변수
                index = j;       // 가장 작은 수의 인덱스를 저장
            }
        }

        // 현재 순회에서 찾은 가장 작은 수를 i번째 인덱스의 변수와 치환
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }


    for(int i: array){
        cout << i << " ";
    }

    return 0;
}