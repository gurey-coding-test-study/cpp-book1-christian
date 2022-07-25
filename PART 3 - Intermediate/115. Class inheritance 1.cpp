//#include "stdafx.h"
#include <iostream>

using namespace std;

class Building1
{
public:
	void Name() { cout << "노른자 위 좋은 건물" << endl; }
};

class BuildingOwner : public Building1
{
public:
	void MyBuilding()
	{
		cout << "내 보물 : ";
		Name();
	}
};

int main(void)
{
	BuildingOwner envious;
	envious.MyBuilding();

	return 0;
}
