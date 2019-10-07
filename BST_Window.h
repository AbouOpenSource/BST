//
// Created by abou on 08/10/2019.
//

#ifndef BST_BST_WINDOW_H
#define BST_BST_WINDOW_H

#include <glutWindow.h>

class BST_Window : public GlutWindow{

    BST_Window(const string &title,int argc,char **argv):GlutWindow(argc,argv,title,820,150,FIXED) {};


    void onStart() override;
    void onDraw() override;
    void onQuit() override;
    void onMouseMove(double cx,double cy) override;
    void onMouseDown(int button,double cx,double cy) override;






};
#endif //BST_BST_WINDOW_H
        void BST_Window::onStart() {

        }
        void BST_Window::onDraw() {

        }
        void BST_Window::onMouseMove(double cx,double cy) {

        }
        void BST_Window::onQuit()
        {

        }
        void BST_Window::