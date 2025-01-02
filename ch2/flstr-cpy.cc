#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 


int main() {
    ifstream in ("temp.cc"); 
    string out, line; 
    while (getline(in, line)) 
        out += line + "\n"; 
    cout << out; 
}
