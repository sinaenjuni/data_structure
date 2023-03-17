#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){ // sort 함수의 정렬 기준을 설정
    return a > b;
}


int main(){
    int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(int i: a){
        cout << i << " ";
    }
    cout << "\n";
    
    sort(a, a+10); // 메모리 주소를 넣어준다. 
    
    for(int i: a){
        cout << i << " ";
    }
    cout << "\n";

    sort(a, a+10, compare); // compare 함수를 이용하여 내림차순으로 정렬
    for(int i: a){
        cout << i << " ";
    }




    return 0;
}