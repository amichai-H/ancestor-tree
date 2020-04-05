#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
namespace family
{
    class Node{
        public:
            string name;
            Node *father;
            Node *mother;
            void set_name(string s);
            string get_name();
            void set_mother(string s);
            void set_father(string s);
            bool myNameIs(string s);
            Node* get_mother();
            Node* get_father();
            bool addRecorsiveF(string name, string father);
            bool addRecorsiveM(string name, string mother);
            ~Node(){
                    if (this->father == NULL && this->mother == NULL)
                    {
                        
                    }
                    else if(this->father == NULL){
                        delete(this->mother);
                     }
                    else if (this->mother == NULL)
                    {
                       delete(father);
                    }else
                    {
                        delete(mother);
                        delete(father);
                    }
            }
            
        };
    class Tree{
        public:
        Node* root = new Node();

            Tree(string s){
                root->set_name(s);
                cout<< root->get_name()<<endl;
                printf("new Tree\n");
            }
            string to_string();
            Tree& addFather(string child, string father);
            Tree& addMother(string child, string mother);
            string relation(string name);
            string find(string motherORfather);
            void display();
            void remove(string s);
            ~Tree(){
                delete(root);
            }
        
    };
    bool addRecorsiveF(string name, string father,Node &current);
    bool addRecorsiveM(string name, string mother,Node &current);
}; // namespace family
