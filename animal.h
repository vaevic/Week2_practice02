#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
#include <iostream>

class animal{
protected:
	string name;
	int age;

public:
	animal(string m, int g) : name(m), age(g) {
		name = m;
		age = g;
	}

	string hello();
	virtual void Sound() = 0;

	//�ɹ��Լ�
	void setname(string m) { this->name = name; }
	string getname() { return name; }

	void setage(int g) { this->age = age; }
	int getage() { return age; }

	
};

class Dog : public animal{
public:
	Dog(string m, int g) : animal(m, g) {
		
	}
	
	void Sound() {
		cout << "�۸�!" << endl;
	}
};

class Cat : public animal {
public:
	Cat(string m, int g) : animal(m, g) {}
	
	void Sound() {
		cout << "�߿�!" << endl;
	}
};

class Cow : public animal {
public:
	Cow(string m, int g) : animal(m, g) {}
	
	void Sound() {
		cout << "����!" << endl;
	}
};
#endif // !ANIMAL_H_

