#include "animal.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	Dog a("�̴�", 3);
	Cat b("����", 2);
	Cow c("������", 5);


	animal* ptrAni;
	Dog ptrDog;
	Cat ptrCat;
	Cow ptrCow;

	ptrAni = &ptrDog;
	ptrAni->Sound();

	ptrAni = &ptrCat;
	ptrAni->Sound();

	ptrAni = &ptrCow;
	ptrAni->Sound();

	


	return 0;

}