
#include"ArrayBST.h"
int main()
{

    ArrayBST A;
    cout<<A.isEmpty()<<endl;

    A.addBST(30);
    A.addBST(20);
    A.addBST(40);
    A.addBST(15);
    A.addBST(25);
    A.addBST(35);

    A.addBST(14);
    A.addBST(17);
    A.addBST(23);
    A.addBST(27);
    A.addBST(32);
    A.addBST(37);




    A.trasverse();
    cout<<endl<<A.searchBST(40)<<endl;

   A.removeBST(40);
   A.trasverse();
   cout<<endl<<A.searchBST(40)<<endl;




    return 0;

}
