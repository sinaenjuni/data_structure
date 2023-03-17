#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int,int>> b){
    if(a.second.first == b.second.first){ // 점수가 같으면
        return a.second.second > b.second.second; // 생년월일이 
    }else{
        return a.second.first > b.second.first; 

    }

}

int main(){
    vector<pair<string, pair<int, int>>> v;
    v.push_back(pair<string, pair<int, int>>("신현준", pair<int, int>(90, 1995)));
    v.push_back(pair<string, pair<int, int>>("오찬솔", pair<int, int>(90, 1994)));
    v.push_back(pair<string, pair<int, int>>("황인우", pair<int, int>(99, 1997)));
    v.push_back(pair<string, pair<int, int>>("이원희", pair<int, int>(80, 1998)));

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " ";
    }

    return 0;
}


