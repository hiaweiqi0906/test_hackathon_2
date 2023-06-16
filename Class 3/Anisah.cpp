
class Student
{
private:
   int matricNum;
   string name;

public:
   void setStudent(int, string);
   int getMatricNum();
   string getName();
}

class ListNode
{
public:
   Student student;
   ListNode *next;
}

class LinkedList
{
   private:
      ListNode *head;

   public:
      LinkedList() { head = nullptr; }
      void appendNode(Student);
      void insertNode(Student);
      void deleteNode(Student);
      void displayList();
}

int main()
{
   // write here
   // my arrays
   int a;
   string b;
   Student stud[3] = {}; //
   // Student stud[3];
   /**
    * Student studs[3]; // to declare array
    *
    * studs = {stud1, stud2, stud3}; // to initialize arr, but we need to have value
   */

   for (int i = 0; i < 3; i++)
   {
      cin >> a >> b;
      stud[i].setStudent(a, b);
   }
   // create arrays and linked list way to group 3 students.
   // my linked list
   Student s1, s2, s3;
   cin >> a >> b;
   s1.setStudent(a, b);
   cin >> a >> b;
   s2.setStudent(a, b);
   cin >> a >> b;
   s3.setStudent(a, b);

   LinkedList myStudent;

   myStudent.appendNode(s1);
   myStudent.appendNode(s2);
   myStudent.insertNode(s3);

   return 0;
}
