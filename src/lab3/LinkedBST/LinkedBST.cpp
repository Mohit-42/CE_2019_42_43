#include <iostream>
#include "LinkedBST.h"

LinkedBST::LinkedBST(){
 this->root = NULL;
}

LinkedBST::~LinkedBST()
{
    delete root;
}

bool LinkedBST::isEmpty(){
    return this->root == NULL;
}

void LinkedBST::addBST(int key, int value)
{
    Node *child(new Node);
    child->data.key = key;
    child->data.data = value;
    child->left = child->right = NULL;

    if (this->isEmpty())
    {
        this->root = child;
    }
    else
    {
        this->addBST(this->root, child);
    }
}

void LinkedBST::addBST(Node *subroot, Node *newNode)
{

    if (subroot->data.key > newNode->data.key)
    {
        if (subroot->left != NULL)
        {
            addBST(subroot->left, newNode);
        }
        else
        {
            subroot->left = newNode;
        }
    }
    else if (subroot->data.key < newNode->data.key)
    {
        if (subroot->right != NULL)
        {
            addBST(subroot->right, newNode);
        }
        else
        {
            subroot->right = newNode;
        }
    }
}

bool LinkedBST::searchBST(int targetkey)
{

    if (this->isEmpty())
    {
        std::cout << "Tree is Empty" << std::endl;
    }
    else
    {
        Node *temp = this->root;

        while (temp != NULL)
        {
            if (temp->data.key == targetkey)
            {
                return true;
            }
            else if (temp->data.key < targetkey)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
    }
    return false;
}

void LinkedBST::inorder(){
    std::cout << "Inorder Traversal:" << std::endl;
    this->inorder(this->root);
    std::cout << std::endl;
}

void LinkedBST::inorder(Node *node, char sep)
{
    if (node != NULL)
    {
        inorder(node->left);
        std::cout << node->data.key << sep;
        inorder(node->right);
    }
}

void LinkedBST::removeBST(int key)
{
    if (this->isEmpty())
    {
        std::cout << "The tree is empty" << std::endl;
    }
    else
    {
        this->removeBST(this->root, key);
    }
}

Node *LinkedBST::removeBST(Node *subroot, int key)
{

    Node *temp = subroot;

    if (temp == NULL)
    {
        return subroot;
    }

    else if (key < temp->data.key)
    {
        temp->left = removeBST(temp->left, key);
    }

    else if (key > temp->data.key)
    {
        temp->right = removeBST(temp->right, key);
    }

    else
    {

        if (subroot->left == NULL)
        {
            temp = subroot->right;
            delete subroot;
            return (temp);
        }

        else if (subroot->right == NULL)
        {
            temp = subroot->left;
            delete subroot;
            return (temp);
        }

        else
        {
            Node *temp = max(subroot->left);
            subroot->data.key = temp->data.key;
            subroot->left = removeBST(subroot->left, temp->data.key);
        }
    }

    return (subroot);
}

Node *LinkedBST::max(Node *subroot)
{

    Node *temp = subroot;
    if (temp->right == NULL)
    {
        return (temp);
    }

    while (temp->right != NULL)
    {

        temp = temp->right;
    }

    return (temp);
}