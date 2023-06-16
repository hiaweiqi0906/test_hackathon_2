class Node{
   public:
      int var;
      Node *next;
      Node(int v){
         var = v;
         next = nullptr;
      }
};

class Queues{
   private:
      Node *tail, *front;
   public:
      Queues(){
         tail = front = nullptr;
      }

      void enqueue(int);
      int dequeue();
};

void Queues::enqueue(int v){
   Node *newNode = nullptr;
   newNode = new Node(v);

   Node *currentNode = nullptr;

   // enqueue == append a node to last element
   if(!tail){
      tail = front = newNode;
   }else{
      currentNode = tail;
      currentNode-> next = newNode;
      tail = newNode;
   }
}

int Queues::dequeue(){
   Node *currentNode = nullptr;
   Node *nodeToBeDeleted = nullptr;

   if(!tail){
      cout<<"Empty Node";
      return;
   }else{
      currentNode = front;
      while(currentNode-> next != front){
         currentNode = currentNode-> next;
      }
      nodeToBeDeleted = front;
      front = currentNode;
      int deletedValue = nodeToBeDeleted->var;
      delete nodeToBeDeleted;
      return deletedValue;
   }
}

int main(){

   return 0;
}