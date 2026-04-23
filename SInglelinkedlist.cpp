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

        node *previous = START;
        node *current = START;

        while(current != NULL && nim > current->noMhs){
            if(nim == current->noMhs){
                cout<<"NIM sudah ada, tidak boleh duplikat"<<endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        nodeBaru->next = current;
        previous->next = nodeBaru;
    }

    bool listEmpty(){
        return (START == NULL);
    }

    bool search(int nim, node *&previous, node *&current){
        previous = START;
        current = START;

        while(current != NULL && nim != current->noMhs){
            previous = current;
            current = current->next;
        }
        return (current != NULL );
    }