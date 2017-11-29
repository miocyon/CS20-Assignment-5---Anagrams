// Anthony Friscia
// CS20A, Section #4118
// Assignment #5
// Thi is an anagram finding program that takes an input string, and finds all anagrams of it, and checks these againist
// a given wordlist.
// This is the implementation file for the functions for this program.

#include "anagramfxns.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void swap (char *x, char *y)
{
// A utility function
    
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int readDictionary(istream &dictfile, string dict[])
{
//  Places each string in dictfile into the array dict. Returns the number of words read into dict.
//  This number should not be larger than MAXDICTWORDS since that is the size of the array.

    string linedump;
    
    if(!getline(dictfile, linedump))
    {
        return 0;
    }
    *dict = linedump;
    return 1 + readDictionary(dictfile, dict+1);
}

int recursivePermute(string word, const string dict[], int size, string results[])
{
//  Places all the permutations of word, which are found in dict into results.
//  Returns the number of matched words found.
//  This number should not be larger than MAXRESULTS since that is the size of the array.
//  The size is the number of words inside the dict array.
    
    // stop when substr length = 1 (return 0)
    
    // swap first letter with all other letters
        // check each combination against dict and against results (to remove dupes)
        // call recursive function with new first letter substr of minus first letter
    // swap back letters (do I have to do this

}

void recurPrint(const string results[], int size)
{
//  Prints size number of strings from results.
//  The results can be printed in any order.
    
    if(size == 0)
        return;
    
    cout << *(results + size) << endl;
    recurPrint(results, size - 1);
    
}