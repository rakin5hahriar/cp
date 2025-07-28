#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(100);
    v1.push_back(200);
    v1.push_back(300);

    cout << v1.size() << endl;
    cout << v1.empty() << endl;

    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v2(arr, arr + 5);

    

    // iterator
    vector<int> :: iterator it;
    for (it = v2.begin(); it != v2.end(); it ++){
        cout << *it << " ";
    }
    cout << endl;

    vector<int> :: iterator it2 = v1.begin() + 2;
    v1.insert(it2, v2.begin()+1, v2.begin()+4);
    
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] <<  " ";
    }
    cout << endl;

    // v1.pop_back();

    v1.erase(v1.begin()+1, v1.begin()+4);

    vector<int> :: iterator it1;
    for (it1 = v1.begin(); it1 != v1.end(); it1 ++){
        cout << *it1 << " ";
    }
    cout << endl;

}