#include "LinkedBST.cpp"
#include <iostream>

int main()
{
    int result=0;
    LinkedBST tree;

    std::cout << "Check if tree is empty" << std::endl;
    std::cout << tree.isEmpty()<< std::endl;

    std::cout << "Adding index=>value 0=>30,1=>20,2=>40,4=>40,6=>60,8=>80" << std::endl;
    tree.addBST(0, 1);
    tree.addBST(1, 2);
    tree.addBST(2, 3);
    tree.addBST(4, 4);
    tree.addBST(6, 5);
    tree.addBST(8, 6);

    std::cout << "searching for index 2 in tree" << std::endl;
    std::cout << tree.searchBST(2)<< std::endl;

    tree.inorder();

    std::cout << "Removing index 4 from the tree" << std::endl;
    tree.removeBST(4);

    tree.inorder();

    return 0;
}
