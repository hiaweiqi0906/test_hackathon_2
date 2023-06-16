/**
 * class Student{
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
	return 0;
}
*/