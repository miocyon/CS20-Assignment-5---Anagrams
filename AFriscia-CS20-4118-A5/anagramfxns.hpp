// Anthony Friscia
// CS20A, Section #4118
// Assignment #5
// Thi is an anagram finding program that takes an input string, and finds all anagrams of it, and checks these againist
// a given wordlist.
// This is the header file for the functions for this program.

#ifndef anagramfxns_hpp
#define anagramfxns_hpp

#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

int readDictionary(istream &dictfile, string dict[]);

void permute(string str, string out, int *numresults, string results[], int size, string dict[]);

int recursivePermute(string word, const string dict[], int size, string results[]);

void recurPrint(const string results[], int size);


#endif /* anagramfxns_hpp */
