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
	//write here
   // create arrays and linked list way to group 3 students.
Student stu1,stu2,stu3;

stu1.setStudent(16, " Munir");
stu2.setStudent(17, " Muna");
stu3.setStudent(18, " Mun");

Student stu[3]={stu1,stu2,stu3};

LinkedList stulist;
stulist.appendNode(stu1);
stulist.appendNode(stu2);
stulist.appendNode(stu3);

for(int i=0; i<3; i++)
{
cout<< "ID num student "<< i+1 <<": "<<stu[i].getMatricNum()<< endl;
cout<< "Name student "<< i+1 <<": "<<stu[i].getName()<<endl;
}

stulist.displayList();
    return 0;
}
