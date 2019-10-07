//
// Created by abou on 23/09/2019.
//

#ifndef BST_BST_H
#define BST_BST_H


#include <iostream>
#include <algorithm>
#include <vector>
#include <glutWindow.h>


class BST {
    BST* leftChild;
    BST* rightChild;
    BST* parent;
    int key;
    float x,y;

public:

    BST(int k):key(k),leftChild(nullptr),rightChild(nullptr),parent(nullptr){

    }
    /**
     *
     * @param k
     * @param lc
     * @param rc
     */
    BST(int k, BST* lc, BST *rc){
        key=k;
        leftChild=lc;
        rightChild=rc;
        parent= nullptr;
        if(leftChild) leftChild->parent=this;
        if(rightChild) rightChild->parent=this;

    }
    /**
     * @brief the number of element of nodes is 1 (me) +
     * the number of left children +
     * the number of right children
     * @return the number of children
     */
    int nbrNodes(){
        return 1+(leftChild?leftChild->nbrNodes():0)+
                (rightChild?rightChild->nbrNodes():0);
    }

    void print(){
        if(leftChild) leftChild->print();
        std::cout << key << std::endl;
        if (rightChild) rightChild->print();
     }
    int getHeight(){
        /*to get it i can search the max value of children*/
        return 1+ std::max( (leftChild ? leftChild->getHeight(): 0 ) , (leftChild?leftChild->getHeight(): 0 )) ;
    }
    int nbChildrenAtLevl(int h){

        if(h==0) return 1;
        else{
            return  (leftChild ? leftChild->nbChildrenAtLevl(h-1):0)+
                    (rightChild ? rightChild->nbChildrenAtLevl(h-1):0);

        }
    }
    void placeNode( std::vector<std::pair <int,int>> Nh, int h){
        int H= Nh.size();
        Nh[h].second++;

      //  x=GlutWindow::getWindowwidth()*(Nh[h].second+0.5)/H;
        //y=GlutWindow::getWindowHeight()*(1-(h+0.5)/H);
        if(leftChild) leftChild->placeNode(Nh,h-1);
    }
};


#endif //BST_BST_H
