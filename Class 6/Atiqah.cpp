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
      Node *next;

      Node(string desc){
         description = desc;
         next = nullptr;
      }
};

class LinkedList{
   private:
      Node *head;
   public:
      LinkedList(){
         head = nullptr;
      }

      void appendNode(string);
};

void LinkedList::appendNode(string desc){
   Node *newNode = nullptr;
   newNode = new Node(desc); // new -> create/allocate new memory in computer for this pointer. Easily delete, by using delete keyword

   Node *currentNode = nullptr;

   if(!head){ // if head is nullptr, then it will return false
      // this is empty list
      head = newNode;
   }else{
      currentNode = head;
      while(currentNode->next != nullptr){
        currentNode = currentNode->next ;
      }
    currentNode->next =newNode ;
   }
}

int main(){
   string puzzle;
   puzzle = getline();
   LinkedList puzzleList=new LinkedList();
   puzzleList.appendNode(puzzle);
   return 0;
}