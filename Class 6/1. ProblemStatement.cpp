/**
 * 1. write down the structures no matter you r writting queues/stacks/linkedlist
 * 2. Write the details of NODE
 *    1. the var i want to store
 * 3. Write the details of the data structures
 *    i. variables, pointers
 *    ii. Constructor, destructor
 *    iii. operations (appending a node)
 *       a. consider different scenarios
 *          - is it empty?
 *          - if is it not empty, is it only single node?
 *          - else, is it have multiple nodes
 * 4. Try to use the data structures, in main function
 * 5. debug error if any


Q1 :
You watched a movie, and this movie is about puzzles to solve.
And the puzzle always linked to the clue of next puzzle.

As the maniac of puzzle solving and programming, you want to keep track of all
steps of solving problems. You want to store the whole process.

linked list. - singular linked list

*/
#include <iostream>
using namespace std;

class Node{
   public:
      string description;
      Node *next, *prev;

      Node(string desc){
         description = desc;
         next = nullptr;
         prev = nullptr;
      }
};

class DoublyLinkedList{
   private:
      Node *head,*tail;
   public:
      DoublyLinkedList(){
         head = nullptr;
         tail = nullptr;
      }

      void appendNode(string);
};

void DoublyLinkedList::appendNode(string desc){
   Node *newNode = nullptr;
   newNode = new Node(desc);

   Node *currentNode = nullptr;

   if(!head){ // if head is nullptr, then it will return false
      // this is empty list
      head = newNode;
      tail = newNode;
   }else{
      currentNode = tail;
      tail-> next = newNode;
      tail = newNode;
   }
}

int main(){
   string puzzle;
   puzzle = getline();
   DoublyLinkedList puzzleList = new DoublyLinkedList();
   puzzleList.appendNode(puzzle);
   return 0;
}