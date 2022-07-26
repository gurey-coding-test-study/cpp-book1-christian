#include <iostream>
#include <string>

using namespace std;

class Ondal {
public:
	friend void GetYear(Ondal ondal)
	{
		cout << "야단성 전투 연도 : " << ondal.year_ << endl;
	}

	void SetYear(int year) { year_ = year; }

private:
	int year_;
};

int main(void)
{
	Ondal ondal;
	ondal.SetYear(590);

	GetYear(ondal);

	return 0;
}
