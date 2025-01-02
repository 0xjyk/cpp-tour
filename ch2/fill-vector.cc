#include <vector> 
#include <string> 
#include <iostream> 
#include <fstream> 

using namespace std; 

int main() {
    vector<string> s; 
    ifstream in("temp.cc"); 
    string line; 
    while (getline(in, line))
        s.push_back(line); 
    for (int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl; 
}


