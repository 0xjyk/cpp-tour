#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main() {
    ifstream in("src.cc"); 
    ofstream out("src-cpy.cc"); 

    string s; 
    while (getline(in, s))
        out << s << "\n"; 
}
