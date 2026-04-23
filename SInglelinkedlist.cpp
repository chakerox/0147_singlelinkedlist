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
        
        node *nodeBaru = new node;
        nodeBaru->noMhs = nim;
        nodeBaru->next = NULL;
        
        if(START == NULL || nim <= START->noMhs){
            if(START != NULL && nim == START->noMhs){
                cout<<"NIM sudah ada, tidak boleh duplikat"<<endl;
                return;
            }
            
            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }

        