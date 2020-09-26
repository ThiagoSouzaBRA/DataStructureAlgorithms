#include <stdlib.h>
#include <iostream>
#include "node.h"

using namespace std;

class linkedList{
  private:
    node *head = NULL;
  public:
    
    bool insertNode(int value){
      node *newNode, *aux;
      newNode = new node(value);
      if(isEmpty()) {head = newNode; return true;}
      cout << "test";
      aux = head;
      while(aux->next != NULL){
        aux = aux->next;
      }
      aux->next = newNode; return true;
    }

    bool isEmpty(){
      return head == NULL;
    }

    bool removeNode(){
      node *aux,*previous;
      aux = head;
      if(isEmpty()) return false;
      while(aux->next != NULL){
        previous = aux;
        aux = aux->next;
      }
      if(countNodes()==1)
      {
        head = NULL;
        delete(aux);
      }
      else
      {
        previous->next = NULL;
        delete(previous->next);
      }
      return true;
    }

    void print(){
      node *aux;
      aux = head;
      int count = 0;
      while(aux != NULL){
        cout << "\nNode : " << count++
              << "\nValue : " << aux->value << "\n";
        aux = aux->next;
      }
    }

    int countNodes(){
      node *aux;
      aux = head;
      int count = 0;
      while(aux != NULL){
        count++;
        aux = aux->next;
      }
      return count;
    }
  
};