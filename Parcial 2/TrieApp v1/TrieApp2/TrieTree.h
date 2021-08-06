#ifndef TRIETREE_H_INCLUDED
#define TRIETREE_H_INCLUDED
#include "TrieNode.h"

class TrieTree{
private:
    TrieNode *root;
public:
    TrieTree();
    ~TrieTree();
    // Insert string str
    void insert(string str);
    // Query the string str has appeared, and returned as a prefix several times
    int search(string str);
    // Delete the string str
    void Delete(string str);
    void destory(TrieNode* root);
    // Print all the nodes in the tree
    void printAll();
    // Print the word prefixed with str
    void printPre(string str);
    // Output all words rooted in root in lexicographic order
    void Print(TrieNode* root);
    // Returns the number of words prefixed by str
    int prefixNumbers(string str);
};

TrieTree::TrieTree()
{
    root = new TrieNode();
}


TrieTree::~TrieTree()
{
    destory(root);
}

void TrieTree::destory(TrieNode* root)
{
    if(root == NULL)
        return ;
    for(int i=0;i<MaxBranchNum;i++)
    {
        destory(root->nexts[i]);
    }
    delete root;
    root = NULL;
}


void TrieTree::insert(string str)
{
    if(str == "")
        return ;
    char buf[str.size()];
    strcpy(buf, str.c_str());
    TrieNode* node = root;
    int index = 0;
    for(int i=0; i<strlen(buf); i++)
    {
        index = buf[i] - 'a';
        if(node->nexts[index] == NULL)
        {
            node->nexts[index] = new TrieNode();
        }
        node = node->nexts[index];
        node->path++;// There is a path across this node
    }
    node->End++;
    node->word = str;
}

int TrieTree::search(string str)
{
    if(str == "")
        return 0;
    char buf[str.size()];
    strcpy(buf, str.c_str());
    TrieNode* node = root;
    int index = 0;
    for(int i=0;i<strlen(buf);i++)
    {
        index = buf[i] - 'a';
        if(node->nexts[index] == NULL)
        {
            return 0;
        }
        node = node->nexts[index];
    }
    if(node != NULL)
    {
        return node->End;
    }else
    {
        return 0;
    }
}

void TrieTree::Delete(string str)
{
    if(str == "")
        return ;
    char buf[str.size()];
    strcpy(buf, str.c_str());
    TrieNode* node = root;
    TrieNode* tmp;
    int index = 0;
    for(int i = 0 ; i<str.size();i++)
    {
        index = buf[i] - 'a';
        tmp = node->nexts[index];
        if(--node->nexts[index]->path == 0)
        {
            delete node->nexts[index];
        }
        node = tmp;
    }
    node->End--;
}

int TrieTree::prefixNumbers(string str)
{
    if(str == "")
        return 0;
    char buf[str.size()];
    strcpy(buf, str.c_str());
    TrieNode* node = root;
    int index = 0;
    for(int i=0;i<strlen(buf);i++)
    {
        index = buf[i] - 'a';
        if(node->nexts[index] == NULL)
        {
            return 0;
        }
        node = node->nexts[index];
    }
    return node->path;
}
void TrieTree::printPre(string str)
{
    if(str == "")
        return ;
    char buf[str.size()];
    strcpy(buf, str.c_str());
    TrieNode* node = root;
    int index = 0;
    for(int i=0;i<strlen(buf);i++)
    {
        index = buf[i] - 'a';
        if(node->nexts[index] == NULL)
        {
            return ;
        }
        node = node->nexts[index];
    }
    Print(node);
}

void TrieTree::Print(TrieNode* node)
{
    if(node == NULL)
        return ;
    if(node->word != "")
    {
        cout<<node->word<<" "<<node->path<<endl;
    }
    for(int i = 0;i<MaxBranchNum;i++)
    {
        Print(node->nexts[i]);
    }
}

void TrieTree::printAll()
{
    Print(root);
}



#endif // TRIETREE_H_INCLUDED
