#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    vector<pair<int, string>> v;
    v.push_back(pair<int, string>(92, "신현준"));
    v.push_back(pair<int, string>(98, "오찬솔"));
    v.push_back(pair<int, string>(95, "황인우"));
    v.push_back(pair<int, string>(87, "이원희"));

    for(int i=0; i<v.size(); i++){
        cout << v[i].second << " "; 
    }

    sort(v.begin(), v.end());

    cout << "\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << " ";
    }


    return 0;
}