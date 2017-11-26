//
//  anagramfxns.hpp
//  AFriscia-CS20-4118-A5
//
//  Created by Toe-Knee on 11/24/17.
//  Copyright © 2017 Toe-Knee. All rights reserved.
//

#ifndef anagramfxns_hpp
#define anagramfxns_hpp

#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

int readDictionary(istream &dictfile, string dict[]);

int recursivePermute(string word, const string dict[], int size, string results[]);

void recurPrint(const string results[], int size);


#endif /* anagramfxns_hpp */
