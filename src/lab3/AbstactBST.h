class BST{

    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual void max(int &output) = 0;
    virtual void min(int &output) = 0;
    virtual bool exists(int targetKey) = 0;
    virtual bool searchBST(int targetKey)=0;
    virtual void addBST( int data)=0;
    virtual void removeBST( int key)=0;
    virtual void trasverse()=0;

    virtual void inorder() = 0;

};
