#include <iostream> 
#include <string> 
#include <fstream> 
#include <vector> 

using namespace std; 

int main() {
    vector<string> words; 
    ifstream in("get-words.cc");
    string word;
    while(in >> word)
        words.push_back(word);
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
}
