#ifndef TRIENODE_H_INCLUDED
#define TRIENODE_H_INCLUDED
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;
const int MaxBranchNum = 26;

class TrieNode{
public:
    string word;
    int path;  //How many times has the character been crossed to count the number of strings prefixed with the string?
    int End;
    TrieNode* nexts[MaxBranchNum];

    TrieNode()
    {
        word = "";
        path = 0;
        End = 0;
        memset(nexts,NULL,sizeof(TrieNode*) * MaxBranchNum);
    }

};



#endif // TRIENODE_H_INCLUDED
