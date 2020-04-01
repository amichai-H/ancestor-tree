#include "FamilyTree.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
namespace family
{
    Node ::Node(string name){
        this->name = name;
    }
    Tree ::Tree(string name){
        Node n (name);
        this->root = &n;
    }
    bool Node::addRecorsiveF(string name, string father,Node* current){
        if (current->name.compare(name)==0)
        {
            Node temp (father);
            current->father = &temp;
            return true;
        }
        else
        {
            if (current->father==NULL && current->mother==NULL)
            {
                return false;
            }
            else if (current->father==NULL )
            {
                return current->addRecorsiveF(name,father,current->mother);
            }
            else if(current->mother==NULL)
            {
            return current->addRecorsiveF(name,father,current->father);

            }else
            {
                return current->addRecorsiveF(name,father,current->father) || current->addRecorsiveF(name,father,current->mother);

            }
        }
    }
    bool Node::addRecorsiveM(string name, string mother,Node* current){
        if (current->name.compare(name)==0)
        {
            Node temp (mother);
            current->mother = &temp;
            return true;
        }
        else
        {
            if (current->father==NULL && current->mother==NULL)
            {
                return false;
            }
            else if (current->father==NULL )
            {
                return current->addRecorsiveM(name,mother,current->mother);
            }
            else if(current->mother==NULL)
            {
            return current->addRecorsiveM(name,mother,current->father);

            }else
            {
                return current->addRecorsiveM(name,mother,current->father) || current->addRecorsiveM(name,mother,current->mother);

            }
        }
    }
    Tree Tree::addFather(string name,string father){
        
        return this;
    }
    Tree Tree::addMother(string name,string mother){
        return this;
    }
}; // namespace family