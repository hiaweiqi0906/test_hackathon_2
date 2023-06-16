/**You watched a movie, and this movie is about puzzles to solve.
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

void LinkedList::appendNode(string desc)
{

    Node *nodeptr;
   Node *newNode = nullptr;
   newNode = new Node(desc);


   if(!head)
    {
      head = newNode;
    }
   else
   {
    nodeptr=head;
    while(nodeptr->next)
      nodeptr=nodeptr->next;
    nodeptr->next=newNode;
   }
}

int main(){
   string puzzle;
   puzzle = getline();
   LinkedList puzzleList = new LinkedList();
   puzzleList.appendNode(puzzle);
   return 0;
}