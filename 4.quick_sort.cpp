#include <iostream>

int partition(int list[], int left, int right){
    int pivot = left; // 가장 왼쪽에 있는 데이터를 pivot으로 지정
    // 피벗과의 데이터 비교를 위한 두 인덱스 정의
    int low = ++left; // 피벗보다 큰 수를 찾는 인덱스로 피벗을 제외한 가장 왼쪽에 있는 데이터의 인덱스를 의미
    int high = right; // 피벗보다 작은 수를 찾는 인덱스로 가장 오른쪽 데이터의 인덱스를 의미
    int temp;

    while(low<high) // 두 인덱스가 교차한 경우 순회를 중단하고 high의 인덱스를 반환
    {// left는 피벗보다 큰 수를 찾을 때까지 증가, right보다 커지면 멈춤
        while(list[low] < list[pivot] && low <= right)
        {
            low++; // 피벗보다 작으면 인덱스를 올림
        }
        while(list[high] > list[pivot] && high >= left)
        {
            high--; // 피벗보다 크면 인덱스를 낮춤
        }
        if(low < high)
        { // low와 high가 교차하지 않은 경우, low와 high 위치의 데이터 교환
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        } else 
        { // low와 high가 교차한 경우, pivot과 high 위치의 데이터를 교환
            temp = list[pivot];
            list[pivot] = list[high];
            list[high] = temp;
        }
    }
    return high;
}

void quick_sort(int list[], int left, int right){
    if(left < right){
        int q = partition(list, left, right);
        quick_sort(list, left, q-1);
        quick_sort(list, q+1, right);
    }
    
}

int main(){
    int list[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int n = sizeof(list)/sizeof(*list);
    
    quick_sort(list, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d ", list[i]);
    }
}



// // 피벗이 가장 큰 수인 경우
// 9, 3, 8, 4, 5, 1, 6, 2, 7
// 0, 1, 2, 3, 4, 5, 6, 7, 8

// // 피벗이 가장 작은 수인 경우
// 1, 3, 2, 4, 5, 9, 6, 8, 7

// 5, 3, 8, 4, 9, 1, 6, 2, 7
// 5, 3, 2, 4, 9, 1, 6, 8, 7
// 5, 3, 2, 4, 1, 9, 6, 8, 7
// 1, 3, 2, 4, 5, 9, 6, 8, 7