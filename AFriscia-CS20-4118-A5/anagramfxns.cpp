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
    int dictcount = 0;
    
    while(getline(dictfile, linedump))
    {
        dict[dictcount] = linedump;
        dictcount++;
    }
    return dictcount;
}

int recursivePermute(string word, const string dict[], int size, string results[]);
{
//  Places all the permutations of word, which are found in dict into results.
//  Returns the number of matched words found.
//  This number should not be larger than MAXRESULTS since that is the size of the array.
//  The size is the number of words inside the dict array.
    
    
}

void recurPrint(const string results[], int size);
{
//  Prints size number of strings from results.
//  The results can be printed in any order.

    
}