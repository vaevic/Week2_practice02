#include "animal.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string animal::hello() {
	//�����Ұ� �Լ�
	cout << "�� ģ���� �̸���" << name << "�Դϴ�." << endl;
	cout << "���̴� " << age << "���̿���.";
}

	//�����Ҹ� �����Լ�
virtual void animal:: Sound() {
	cout << "������ �λ��ϰ� �ֽ��ϴ�." << endl;
	
}

int main() {

	Dog::Dog a("�̴�", 3);
	Cat::Cat b("����", 2);
	Cow::Cow c("������", 5);


}