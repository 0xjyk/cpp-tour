#include <iostream> 
using namespace std; 

int globe; 
void func(); 
int main() {
    globe = 12; 
    cout << globe << endl;
    func(); // modifies globe
    cout << globe << endl; 
}

