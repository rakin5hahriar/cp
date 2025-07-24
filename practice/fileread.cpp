#include <bits/stdc++.h>
#include <fstream>
#include <String>
using namespace std;

int main(){
    ifstream file;
    file.open("abc.txt");
    string line;
    if (file.is_open()){
        while(getline(file, line)){
            cout << line << endl;
        }
    }
    else{
        cout << "not found";
    }
}