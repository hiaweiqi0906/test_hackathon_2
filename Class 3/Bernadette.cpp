
 class Student{
	private:
		int matricNum;
		string name;
	public:
		void setStudent(int, string);
		int getMatricNum();
		string getName();
}

class ListNode{
	public:
		Student student;
		ListNode *next;
}

class LinkedList{
	private:
		ListNode *head;
	public:
		LinkedList(){ head = nullptr; }
		void appendNode(Student);
		void insertNode(Student);
		void deleteNode(Student);
		void displayList();
}

int main(){
   // create arrays and linked list way to group 3 students.

   //Method 1 - Array

     Student stu[3];
     int matricNum;
     string name;

    cin>>matricNum>>name;
    stu[1].setStudent(matricNum, name);

    cin>>matricNum>>name;
    stu[2].setStudent(matricNum, name);

    cin>>matricNum>>name;
    stu[3].setStudent(matricNum, name);

   //Method 2 - Linked List
    LinkedList obj; // listOfStudents
    Student stu1, stu2, stu3;

    cin>>matricNum>>name;
    stu1.setStudent(matricNum, name);

    cin>>matricNum>>name;
    stu2.setStudent(matricNum, name);

    cin>>matricNum>>name;
    stu3.setStudent(matricNum,name);

    obj.appendNode(stu1);
    obj.appendNode(stu2);
    obj.appendNode(stu3);

    obj.displayList();

	return 0;
}
