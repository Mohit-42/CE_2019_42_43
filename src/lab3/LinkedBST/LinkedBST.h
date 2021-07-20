#include "AbstractBST.h"

class Data
{
public:
    int key;
    int data;
};

class Node
{
public:
    Data data;

    Node *left;
    Node *right;
};

class LinkedBST : public BST
{

public:
    Node *root;

    LinkedBST();
    ~LinkedBST();

    bool isEmpty();
    void addBST(int key, int value);
    void removeBST(int key);

    bool searchBST(int targetKey);
    void inorder();

private:
    void addBST(Node *subroot, Node *newNode);
    Node *removeBST(Node *subroot, int key);

    Node *max(Node *subroot);
    void inorder(Node *node, char sep = ' ');
};
