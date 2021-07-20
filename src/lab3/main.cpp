#include"ArrayBST.h"
int main()
{

    Bst A;
    cout<<A.isEmpty()<<endl;
    A.removeBST(0,2);
    A.addBST(0,30);
    A.addBST(0,20);
    A.addBST(0,40);
    A.addBST(0,15);
    A.addBST(0,25);
    A.addBST(0,35);
    A.addBST(0,45);
    A.addBST(0,14);
    A.addBST(0,17);
    A.addBST(0,23);
    A.addBST(0,27);
    A.addBST(0,32);
    A.addBST(0,37);
    A.addBST(0,42);
    A.addBST(0,47);


    A.trasverse();

    A.removeBST(0,15);
    A.trasverse();


    return 0;

}
