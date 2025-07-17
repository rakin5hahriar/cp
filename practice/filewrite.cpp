#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("abc.txt", ios::out | ios::app);

    if (file.is_open()){
        file << 1 << endl;
        file << 2 << endl;
    }
    else{
        cout << "can not write";
    }
}
