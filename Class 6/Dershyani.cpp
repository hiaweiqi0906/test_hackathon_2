#include <iostream>
using namespace std;

class Node{
    public:
        string description;
        Node *next;

        Node(string desc){
            description=desc;
            next=nullptr;
        }
};

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList(){
            head=nullptr;
        }
        void appendNode(string);
};

void LinkedList::appendNode(string desc){
   Node *newNode = nullptr;
   Node *currentNode = nullptr;
   newNode = new Node(desc);

   if(!head){
        head=newNode;
   }
   else{
        currentNode= head;
		while(currentNode->next)
            currentNode = currentNode -> next;

		currentNode -> next = newNode;
   }
}

int main(){
   string puzzles;
   puzzles = getline();
   LinkedList puzzleList = new LinkedList();
   puzzleList.appendNode(puzzles);
   return 0;
}