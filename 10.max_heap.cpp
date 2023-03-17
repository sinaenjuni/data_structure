#include <iostream>

using namespace std;


void heapify(int list[], int start, int end){
    int p, c, temp;
    for(int i=end; i>0; i--){
        c=i; // 자식 노드를 초기화
        do{
            p = (c - 1) / 2; // c는 child를 의미, p는 parent를 의미
            if(list[p] < list[c]){ // 자식 노드와 부모 노드의 데이터 크기를 비교해서 데이터 교환
                temp = list[p];
                list[p] = list[c];
                list[c] = temp;
            }
            c = p; // 부모 노드를 자식 노드로 초기화 하여, 위에 있는 트리의 부모로 위 과정을 반복한다.
        }while(c!=0);
    }
}


int main(){
    int i, temp;
    int list[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i=0; i<10; i++){
        cout << list[i] << " ";
    }

    // 입력 배열을 최대 힙 구조로 변환
    heapify(list, 0, 9);
    cout << "\n";
    for(i=0; i<10; i++){
        cout << list[i] << " ";
    }
    // 힙 정렬을 구현하기 위해, 가장 큰 수인 root 노드의 데이터를 가장 마지막으로 보내고
    // 마지막 데이터를 제외한 나머지 데이터들만 가지고 heapify를 수행한다.
    for(i=9; i>0; i--){
        temp = list[i];
        list[i] = list[0];
        list[0] = temp;
        heapify(list, 0, i-1);
    }

    cout << "\n";
    for(i=0; i<10; i++){
        cout << list[i] << " ";
    }

    return 0;
}


