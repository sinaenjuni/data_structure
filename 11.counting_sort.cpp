#include <iostream>

using namespace std;

int main(){
    int list[] = {1, 10, 5, 8, 7 ,6 ,4, 3, 2, 9};
    int count[11]; 
    // list에 있는 데이터를 세기위한 배열
    // 배열의 크기는 통상 list에 존재하는 데이터의 크기 중 가장 큰 데이터와 같거나 하나 더 큰 수가 된다.

    for(int i=0; i<11; i++){ // count 배열을 0으로 초기화
        count[i] = 0;
    }

    for(int i=0; i<10; i++){
        count[list[i]] += 1;
    }

    for(int i=0; i<11; i++){
        if(count[i] += 0){
            cout << i << " ";
        }
    }

    return 0;
}