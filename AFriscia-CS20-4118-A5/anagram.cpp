// Anthony Friscia
// CS20A, Section #4118
// Assignment #5
// Thi is an anagram finding program that takes an input string, and finds all anagrams of it, and checks these againist
// a given wordlist.

#include <iostream>
#include <fstream>
#include <istream>
#include <cstring>
#include "anagramfxns.hpp"
#include "anagramfxns.cpp"
using namespace std;

const int MAXRESULTS   = 20;    // Max matches that can be found
const int MAXDICTWORDS = 30000; // Max words that can be read in

int main()
{
    string results[MAXRESULTS];
    string dict[MAXDICTWORDS];
    ifstream dictfile;         // file containing the list of words
    int nwords;                // number of words read from dictionary
    string word;
    
    dictfile.open("/Users/elendil/Dropbox/Mine/DBDocuments/CS20A/Assignment5/words.txt");
    if (!dictfile) {
        cout << "File not found!" << endl;
        return (1);
    }
    
    nwords = readDictionary(dictfile, dict);
    
    cout << "Please enter a string for an anagram: ";
    cin >> word;
    
    int numMatches = recursivePermute(word, dict, nwords, results);
    if (!numMatches)
        cout << "No matches found" << endl;
    else
       recurPrint(results, numMatches);

}
