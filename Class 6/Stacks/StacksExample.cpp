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

void Stacks::push(int v){
   Node *newNode = nullptr;
   newNode = new Node(v);

   Node *currentNode = nullptr;

   // push == append a node to last element
   if(!top){
      top = bottom = newNode;
   }else{
      currentNode-> next = newNode;
      top = newNode;
   }
}

int Stacks::pop(){
   Node *currentNode = nullptr;
   Node *nodeToBeDeleted = nullptr;

   if(!top){
      cout<<"Empty Node";
      return;
   }else{
      currentNode = bottom;
      while(currentNode-> next != top){
         currentNode = currentNode-> next;
      }
      nodeToBeDeleted = top;
      top = currentNode;
      int deletedValue = nodeToBeDeleted->var;
      delete nodeToBeDeleted;
      return deletedValue;
   }
}

int main(){

   return 0;
}