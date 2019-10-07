#include <iostream>
#include "BST.h"
#include <vector>
#include <glutWindow.h>

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;


    BST* root;
    BST *node1 = new BST(9);
    BST *node2= new BST(14);
    node1=new BST(11 , node1,node2);
    node2= new BST(6, new BST(4),new BST(7));
    node1=new BST(8,node2,node1);
    node2=new BST(31, nullptr, nullptr);
    node2=new BST(25, new BST(21),node2);
    root=new BST(16,node1,node2);
    root->print();
    int h=root->getHeight();
    std::vector < std::pair<int,int> > Nh;


    for (int j = 0; j < h; ++j) {
     Nh.push_back(std::make_pair(root->nbChildrenAtLevl(j),0) );

    }



    for (int i = 0; i < h; ++i) {
        std::cout<< "Level " << i << " : " << root->nbChildrenAtLevl(i)<<std::endl;

    }
    //std::cout << "number of nodes =" << root->nbrNodes()<<std::endl;
      //          std::cout <<"The height od bst "<<  root->getHeight()<<std::endl;
    return 0;
}