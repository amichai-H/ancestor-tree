#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
namespace family
{
    class Node{
        public:
            string name;
            Node* father;
            Node* mother;
            bool addRecorsiveF(string name, string father,Node* current);
            bool addRecorsiveM(string name, string mother,Node* current);

            Node (string name);
        };
    class Tree{
        
        Node* root;

        public:
            Tree (string s);
            string to_string();
            Tree addFather(string child, string fhather);
            Tree addMother(string child, string mother);
            string relation(string name);
            string find(string motherORfather);
            void display();
            Node remove(string s);
        
    };
}; // namespace family