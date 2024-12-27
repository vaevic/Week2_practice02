#include "animal.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string animal:: hello() {
	//동물소개 함수
	cout << "이 친구의 이름은" << name << "입니다." << endl;
	cout << "나이는 " << age << "살이에요.";
}

	//울음소리 가상함수
void animal::Sound() {
	cout << "동물이 인사하고 있습니다." << endl;
	
}
