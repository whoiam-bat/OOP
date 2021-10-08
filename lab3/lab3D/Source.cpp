#include<iostream>
#include<iomanip>
using namespace std;


class Persona {
private:
	string fullName;
	int age;
public:
	Persona(string fullName, int age) : fullName(fullName), age(age) {}
	virtual int ask() = 0;
	virtual int who() = 0;
	virtual void print() = 0;
	string getFullName() {
		return fullName;
	}
	int getAge() {
		return age;
	}

};
class Teacher : public Persona {
private:
	string subject;
	int degree;
public:
	Teacher(string fullName = "", int age =0, string subject = "", int degree = 0) :
		Persona(fullName, age), subject(subject), degree(degree) {}

	int who() override {
		return 1;
	}
	int ask() override {
		return degree;
	}
	string getSubject() {
		return subject;
	}
	void print() override {
		cout <<left<<setw(3)<< who();
		cout << left << setw(20) << getFullName();
		cout << left << setw(4) << getAge();
		cout << left << setw(15) << getSubject();
		cout << left << setw(15) << ask();
	}

};
class HeadDepartment : public Teacher {
private:
	string post;
public:
	HeadDepartment(string fullName  = "", int age = 0, string subject = "", int degree = 0, string post = "") :
		Teacher(fullName, age, subject, degree), post(post) {}
	int who() {
		return 2;
	}
	int ask() {
		getAge();
	}
	string getPost() {
		return post;
	}
	void print() override {
		cout << left << setw(3) << who();
		cout << left << setw(20) << getFullName();
		cout << left << setw(15) << ask();
		cout << left << setw(15) << getSubject();
		cout << left << setw(10) << getPost();
	}
};
class Student :public Persona {
private:
	int marks[5];
public:
	Student(string fullName = "", int age = 0, int* marks = 0) : Persona(fullName, age) {
		for (int i = 0; i < 5; i++) {
			marks[i] = rand() % ((5 - 1 + 1) + 1);
		}
	}
	int who() {
		return 3;
	}
	int ask() {
		int count = 0;
		for (int i = 0; i < 5; i++) {
			if (marks[i] == 2) {
				count++;
			}
		}
		return count;
	}
	int getMarksArray() {
		return* marks;
	}
	void print() override {
		cout << left << setw(3) << who();
		cout << left << setw(20) << getFullName();
		cout << left << setw(15) << ask();
		cout << left << setw(10) << getMarksArray();
	}

};
class University:public Student, public Teacher, public HeadDepartment {
private:
	Student* student;
	Teacher* teacher;
	HeadDepartment* head;
public:
	string fullName[10] = { "Arthur Collins",
						 "Kevin Rodriguez",
						 "Bryan Powell",
						 "Megane Willis",
						 "Raymond Casey",
						 "Derek Wolfe",
						 "Luiza Herrera",
						 "Donald Dunn",
						 "Joseph Hill",
						 "Lana Ellis" };;
	int age;
	string subject[5] = {"OOP","Discrete Math","Differential equals","English","Computational methods"};
	int degree[3] = {1,2,0};
	string post[3] = {"professor", "docent", "senior lecturer"};

	//int countHeadDepartment, int countStudents
	
	void createTeachers(int countTeacher);
	void createHeadDepartment(int countHeadDepartment);
	void createStudent(int countStudent);
	void printTeachers(int countTeacher);
	void printHeadDepartment(int countHeadDepartment);
	void printStudent(int countStudent);

};


int main() {
	University shtat[3];

	int countStudent, countTeacher, countHeadDepartment;
	cout << "Enter count students: ";
	cin >> countStudent;
	cin.ignore();
	cout << "Enter count teacher: ";
	cin >> countTeacher;
	cin.ignore();
	cout << "Enter count head department: ";
	cin >> countHeadDepartment;
	cin.ignore();
	for (int i = 0; i < 3; i++){
		shtat[i].createTeachers(countTeacher);
		shtat[i].createHeadDepartment(countHeadDepartment);
		shtat[i].createStudent(countStudent);
	}
	return 0;
}

void University::createTeachers(int countTeacher) {
	teacher = new Teacher[countTeacher];
	for (int i = 0; i < countTeacher; i++) {
		teacher[i] = Teacher
		(fullName[rand() % 10], (rand() % ((70 - 35 + 1) + 35)),subject[rand() % 5],degree[rand() % 3]);
	}
}

void University::createHeadDepartment(int countHeadDepartment) {
	head = new HeadDepartment[countHeadDepartment];
	for (int i = 0; i < countHeadDepartment; i++) {
		head[i] = HeadDepartment
		(fullName[rand() % 10], (rand() % ((70 - 35 + 1) + 35)), subject[rand() % 5], degree[rand() % 3], post[rand() % 3]);
	}
}

void University::createStudent(int countStudent) {
	student = new Student[countStudent];
	for (int i = 0; i < countStudent; i++) {
		student[i] = Student
		(fullName[rand() % 10], (rand() % ((70 - 35 + 1) + 35)));
	}
}
