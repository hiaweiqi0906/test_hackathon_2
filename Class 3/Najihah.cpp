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
	// Create 3 Student objects
    Student student1, student2, student3;
    student1.setStudent(164148, "Jiji");
    student2.setStudent(164098, "Jojo");
    student3.setStudent(164983, "Juju");

    // Group together using array
    Student arrayStudent[3] = {student1, student2, student3};

    // Group together using linked list
    LinkedList linkedListStudent;
    linkedListStudent.appendNode(student1);
    linkedListStudent.appendNode(student2);
    linkedListStudent.appendNode(student3);

    // Display array students
    for (int i=0; i<3; i++) {
        cout << "Student " << i+1 << endl;
        cout << "Matric Number: " << arrayStudent[i].getMatricNum() << endl;
        cout << "Name: " << arrayStudent[i].getName() << endl;
    }

    // Display linked list students
    linkedListStudent.displayList();

	return 0;
}