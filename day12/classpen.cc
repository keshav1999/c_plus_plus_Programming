#include<iostream>
#include<cstring>
using namespace std;
class mobile
{
public:
	char brand[100];
	int price;
	int imei;
	mobile()
	{
		strcpy(brand, "NOKIA");
	}
	mobile(char br[])
	{
		strcpy(brand, br);
		price=0;imei=0;

	}
	mobile(char bra[], int pr)
	{
		strcpy(brand, bra);


		price = pr;
	}
	void setimei(int code)
	{
		if (code > 0) imei = code;
	}
	int getimei()
	{
		return imei;
	}
	void calling(char person[])
	{
		cout << "calling " << person << " from " << brand << endl;
	}
};
int main()
{
	mobile m("NOKIA",5000);
	cout << m.brand << " "<<m.price<<endl;
	return 0;
}