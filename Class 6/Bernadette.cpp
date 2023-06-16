/**
/**1. write down the structures no matter you r writting queues/stacks/ linkedlist
2. write the details of NODE
3. write the details of the data structures
    i. variables, pointers,
    ii. Constructor, Destructor
    iii.operations appendinf a node
        a consider different scnarios
            -is it empty?
            -if it's not empty, is it only single node?
            -else, is it have multiple nodes
4. Try t use the data structures, in main functions
5. Debug error if any


Q: You watched a movie, and this movie is about puzzles to solve.
 And the puzzle always linked to the clur of next puzzle.

As the maniac of puzzle solving and programming,
you want to keep track of whole steps of solving problem. You
want to store the whole process.

Not only sotire you also want to be able to rewind the process
from the end to beginning

Linked list - doubly linked list/reverse the linked list

You watched a movie, and this movie is about puzzles to solve.
And the puzzle always linked to the clue of next puzzle.

As the maniac of puzzle solving and programming, you want to keep track of all
steps of solving problems. You want to store the whole process.

linked list. - singular linked list
*/

//Stack

class Node{
    public:
        int var;
        Node *next;
        Node(int v){
            var = v;
            next = nullptr;
        }
};

class Stacks{
    private:
        Node *top, *bottom;
    public:
        Stacks(){
            top = bottom = nullptr;
        }

        void push(int);
        int pop();
};

void Stack::push(int v){
    Node* newNode = nullptr;
    newNode = new Node(v);

    Node *currentNode = nullptr;

    //push == append a node to the last element
    if(!top){
        top = bottom= nullptr;
    }
    else{
        currentNode ->next =newNode;
        top = newNode;
    }

int Stacks:: pop(){
    Node *currentNode = nullptr;
    Node *nodeToBeDeleted = nullptr;

    if(!top){
        cout <<"Empty Node";
        return;
    }
    else{
        currentNode = bottom;

        while(currentNode -> next! = top){
            currentNode = currentNode ->next;
        }
        nodeToBeDeleted = top;
        top = currentNode;
        int delete;
    }
}


//Singular Linked List

#include <iostream>
using namespace std;

class ListNode{
    public:
        string puzzles;
        ListNode *next;

        Node(string p){ //Constructor
            puzzles = p;
            next = nullptr;
        }
};

class SingularLinkedList{
    private:
        ListNode *head;
    public:
        SingularLinkedList(){
            head = nullptr;
        }
        void appendNode(string);

};

void SingularLinkedList::appendNode(string p){
    ListNode *newNode = nullptr;
    ListNode *currentNode;
    newNode = new ListNode(p);

    if(!head){
        head = newNode;
    }
    else{
        currentNode = head;
        while (currentNode -> next){
            currentNode = currentNode ->next;
        }
        currentNode->next = newNode;

    }
}

int main(){
    string puzzles;
    puzzles = getline();
    SingularLinkedList puzzleList = new SingularLinkedList();
    puzzlelist.appendNode(puzzles);
}








//DoublyLinkedList List

#include <iostream>
using namespace std;

class Node{
    public:
        string description;
        Node *next;

        Node(string desc){
            description = desc;
            next = nullptr;
        }
};

class DoublyLinkedList{
    private:
        Node *head, *tail;
    public:
        DoublyLinkedList(){
            Node *head = nullptr
            Node *tail = nullptr
        }

        appendNode(string);
};

DoublyLinkedList::appendNode(string desc){
    Node *newNode = nullptr;
    newNode = new Node(desc);

    Node *currentNode = nullptr;

    if(!head){// if head is nullptr, then it will return false
        //this is empty list
        head = newNode;
        tail = newNode;
    }
    else{
        currentNode = tail;
        tail->next= newNode;
        tail = newNode;

    }

int main(){
    string puzzle;
    puzzle = getline();
    DoublyLinkedList puzzleList = new DoublyLinkedList();
    puzzlelist.appendNode()
}