    bool operator <(Student &student){
        return this->score < student.score; // 점수가 낮은게 더 우선, 오름차순 정렬
    }