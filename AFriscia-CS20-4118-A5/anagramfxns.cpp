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
    if((1 + readDictionary(dictfile, dict+1)) > MAXDICTWORDS)
        return 0;
    else
        return 1 + readDictionary(dictfile, dict+1);
}

void permute(string str, string out, int &numresults, string results[], int size, const string dict[])
{
// A permutation algorithm that also checks against the dict to see if any permutation matches
    
    if (str.size() == 0)
    {
        for(int i = 0; i <= size; i++)
        {
            if(out == dict[i])
            {
                if(numresults > MAXRESULTS)
                    return;
                else
                {
                    results[numresults] = out;
                    numresults++;
                    return;
                }
            }
        }
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        permute(str.substr(1), out + str[0], numresults, results, size, dict);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int recursivePermute(string word, const string dict[], int size, string results[])
{
//  Places all the permutations of word, which are found in dict into results.
//  Returns the number of matched words found.
//  This number should not be larger than MAXRESULTS since that is the size of the array.
//  The size is the number of words inside the dict array.
    
    int numresults = 0;
    string blank = "";
    
    permute(word, blank, numresults, results, size, dict);
    
    if(numresults > MAXRESULTS)
        cout << "More possible permutations than can be shown";
    return numresults;

}

void recurPrint(const string results[], int size)
{
//  Prints size number of strings from results.
//  The results can be printed in any order.
    
    if(size == 0)
        return;

    cout << "Matching word " << *(results + size - 1) << endl;
    recurPrint(results, size - 1);
    
}