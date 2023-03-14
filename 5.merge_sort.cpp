#include <iostream>

using namespace std;


int sorted[8]; 
// 병합 정렬을 정렬을 위해 정렬된 데이터를 저장할 별도의 임시 공간이 필요하다.
// 메모리 절약을 위해서 전역 변수로 선언한다.

void merge(int list[], int start, int mid, int end){
    int part1 = start;
    int part2 = mid + 1;
    int index = start;
    int i = 0;

    while(part1 <= mid && part2 <= end){ 
        if(list[part1] <= list[part2]){ // 작은 수부터 sorted 배열에 삽입
            sorted[index++] = list[part1++];
        }else{
            sorted[index++] = list[part2++];
        }
    }

    // 인덱스가 끝나지 않은 배열이 존재하는 경우 해당 배열에 남은 모든 데이터를 배열에 넣는다.
    if(part1 <= mid){ // 왼쪽 배열에 데이터가 남아있는 경우
        for(i=part1; i<=mid; i++){
            sorted[index++] = list[i];
        }
    }else{ // 오른쪽 배열에 데이터가 남아있는 경우s
        for(i=part2; i<=end; i++){
            sorted[index++] = list[i];
        }
    }
    // 임시 정렬 배열에 저장된 데이터를 원래 배열로 이동
    for(i=start; i<=end; i++){
        list[i] = sorted[i];
    }

}


void merge_sort(int list[], int left, int right){
    int mid;
    if(left < right){ // left와 right 인덱스 사이에 하나의 값이상 존재하는 경우
        mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);
    }                                    
}


int main(){
    int list[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    merge_sort(list, 0, 9);

    for(int i: list){
        cout << i << " ";
    }

    return 0;
}