#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter a sentence : ";
    string sentence;
    getline(cin, sentence);
    int count_letters = 0, count_words = 0;
    for(int i=0; i<sentence.length(); i++) {
        if(sentence[i] == ' ') {
            continue;
        } else {
            count_letters++;
        }
    }
    for(int i=0; i<sentence.length(); i++) {
        if(sentence[i] == ' ') {
            count_words++;
        }
    }
    count_words++;
    cout << "Number of letters in your sentence are : " << count_letters << endl;
    cout << "Number of words in your sentence are : " << count_words << endl;
    return 0;
}