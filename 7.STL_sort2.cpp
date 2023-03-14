#include <iostream>
#include <algorithm>

using namespace std;


class Student{
    public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    bool operator <(const Student &student){
        return this->score < student.score; // 점수가 낮은게 더 우선, 오름차순 정렬
    }
};


int main(){
    Student students[] ={
        Student("신현준", 92),
        Student("오찬솔", 98),
        Student("황인우", 95),
        Student("이원희", 87)
    };
    
    sort(students, students + 4);

    // for(Student student: students){
    //     cout << student.name << " ";
    // }

    // for(int i=0; i<4; i++){
    //     cout << students[i].name << " ";
    // }

    return 0;
}


