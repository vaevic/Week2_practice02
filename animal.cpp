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
void animal:: Sound() {
	cout << "������ �λ��ϰ� �ֽ��ϴ�." << endl;
	
}

int main() {

	Dog a("�̴�", 3);
	Cat b("����", 2);
	Cow c("������", 5);


}