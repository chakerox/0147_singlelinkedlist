#include<iostream>
#include<string>
using namespace std;

class node{
    public:
     int noMhs;
     node *next;
};

class linkedlist{

    node *START;

    public:
    
        linkedlist(){
        START = NULL;
        }
        
        void addnode(){
        int nim;
        cout<<"Masukkan NIM : ";
        cin>>nim;
        
        