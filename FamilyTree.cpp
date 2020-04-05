#include "FamilyTree.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
namespace family
{
    void Node::set_name(string s){
        name = s;
    }
    string Node::get_name(){
        return name;
    }
    void Node::set_mother(string s){
        this->mother = new Node();
        this->mother->name = s;
    }
    void Node::set_father(string s){
        this->father = new Node();
        this->father->name=s;
    }
    bool Node::myNameIs(string s){
        cout << "    compare" << endl;
        cout << s << endl;
        cout << get_name() << endl;
        cout << "    end compare" << endl;
        return (get_name().compare(s)==0);
    }
    Node* Node::get_mother(){
        return this->mother;
    }
    Node* Node::get_father(){
        return this->father;
    }



    
    bool Node::addRecorsiveF(string name, string father){
        printf("Line 42\n");

         //cout << get_name() << endl;
        if (this->myNameIs(name))
        {
            printf("Line 47 - sucsess\n");
            this->set_father(father);
            return true;
        }
        else
        {
            printf("Line 53\n");
            if (this->get_father()==NULL && this->get_mother()==NULL)
            {
                return false;
            }
            else if (this->get_father() == NULL )
            {
                return this->get_mother()->addRecorsiveF(name,father);
            }
            else if(this->get_mother() == NULL)
            {
            return this->get_father()->addRecorsiveF(name,father);

            }else
            {
                return this->get_father()->addRecorsiveF(name,father) || this->get_mother()->addRecorsiveF(name,father);
            }

            }
        }
    bool Node::addRecorsiveM(string name, string mother){
        if (this->myNameIs(name))
        {
            this->set_mother(mother);
            return true;
        }
        else
        {
            if (this->get_father()==NULL && this->get_mother()==NULL)
            {
                return false;
            }
            else if (this->get_father()==NULL )
            {
                return this->get_mother()->addRecorsiveM(name,mother);
            }
            else if(this->get_mother()==NULL)
            {
            return this->get_father()->addRecorsiveM(name,mother);

            }else
            {
                return this->get_father()->addRecorsiveM(name,mother) || this->get_mother()->addRecorsiveM(name,mother);
            }

            }
    }
    Tree& Tree::addFather(string name,string father){
        printf("add father Line 101 \n");
        if(!this->root->addRecorsiveF(name,father)){
                printf("fail Father\n");

            exit(1);
        }
                printf("new Father 100\n");

        return *this;
    }
    Tree& Tree::addMother(string name,string mother){
        if(!this->root->addRecorsiveM(name,mother)){
            exit(1);
        }
        return *this;
    }
    string Tree::relation(string name){
        return "no non";
    }
    string Tree::find(string motherORfather){
        return "find find";
    }
    void Tree::display(){
        cout <<"display is active" << endl;
        return;
    }
    void Tree::remove(string s){
        cout <<"remove is active" << endl;

        return;
    }

    

}; // namespace family