#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//class Pet
//{
//public:
//	char Titel[20];
//	int age;
//	int ves;
//	char color[30];
//	int skor;
//	int st;
//	int iq;
//	Pet(const char* t,int a,int v, int s, int o, int i)
//	{
//		strcpy(Titel, t);
//		age = a;
//		ves = v;
//		skor=s;
//		st=o;
//		iq=i;
//	}
//	virtual void Sound() = 0;
//	virtual void Show() = 0;
//	virtual void Type() = 0;
//};
//
//class Dog :public Pet
//{
//	char poroda[50];
//public:
//	Dog(const char* Titel, int a, int v, int s, int o, int i, const char* p) :Pet(Titel, a, v,s,o,i) { strcpy(poroda, p); };
//	virtual void Sound()
//	{
//		cout  << "say" << "\'gaw-gaw\'\n";
//	}
//	virtual void Show()
//	{
//		cout << "Dog " << Titel <<'\n';
//	}
//	virtual void Type()
//	{
//		cout << "Poroda:" << poroda << '\n';
//	}
//};
//class Papugai :public Pet
//{
//	char poroda[50];
//public:
//	Papugai(const char* Titel, int a, int v, int s, int o, int i, const char* p) :Pet(Titel, a, v,s, o, i) { strcpy(poroda, p); };
//	virtual void Sound()
//	{
//		cout  << "say" << "\'kar-kar\'\n";
//	}
//	virtual void Show()
//	{
//		cout<<"Papugai " << Titel << '\n';
//	}
//	virtual void Type()
//	{
//		cout << "Poroda:" << poroda << '\n';
//	}
//};
//class Cat :public Pet
//{
//	char poroda[50];
//public:
//	Cat(const char* Titel, int a, int v, int s, int o, int i, const char* p) :Pet(Titel, a, v, s, o, i) { strcpy(poroda, p); };
//	virtual void Sound()
//	{
//		cout  << "say" << "\'maw-maw\'\n";
//	}
//	virtual void Show()
//	{
//		cout<<"Cat" << Titel << '\n';
//	}
//	virtual void Type()
//	{
//		cout <<"Poroda:" << poroda << '\n';
//	}
//};
//class Hom :public Pet
//{
//	char poroda[50];
//public:
//	Hom(const char* Titel, int a, int v, int s, int o, int i, const char* p) :Pet(Titel, a, v, s, o, i) { strcpy(poroda, p); };
//	virtual void Sound()
//	{
//		cout  << "say" << "\'kus-kus\'\n";
//	}
//	virtual void Show()
//	{
//		cout<<"Hom " << Titel << '\n';
//	}
//	virtual void Type()
//	{
//		cout << "Poroda:" << poroda << '\n';
//	}
//};

class Transport
{
public:
	int time_p;
	int time_g;
	int count_p;
	int count_g;
	virtual void Show() = 0;
	virtual void Set() = 0;
};
class Car:public Transport
{
	int cost_p=45;
	int cost_g=45;
public:
	virtual void Set()
	{
		cout << endl << "������� ����� ������� ��� ��������(������)" << endl;
		cin >> time_p;
		cout << endl << "������� ����� ������� ��� �����(������)" << endl;
		cin >> time_g;
		cout << endl << "������� ���������� �����(������)" << endl;
		cin >> count_p;
		cout << endl << "�������  ���������� �����(������)" << endl;
		cin >> count_g;
	}
	virtual void Show()
	{
		if (time_p * cost_p/ count_p > time_g * cost_g/ count_g)
		{
			cout << "������� ��� ���������� ��������, ��� ��� �����"<<endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}
		else
		{
			cout << "������� ��� ����� ��������, ��� ��� �����" << endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}

	}
	int Getcost_p()
	{
		return time_p * cost_p/ count_p;
	}
	int Getcost_g()
	{
		return time_g * cost_g/ count_g;
	}
};
class Bike :public Transport
{
	int cost_p = 30;
	int cost_g = 60;

public:
	virtual void Set()
	{
		cout << endl << "������� ����� ������� ��� ��������(���������)" << endl;
		cin >> time_p;
		cout << endl << "������� ����� ������� ��� �����(���������)" << endl;
		cin >> time_g;
		cout << endl << "������� ���������� �����(���������)" << endl;
		cin >> count_p;
		cout << endl << "�������  ���������� �����(���������)" << endl;
		cin >> count_g;
	}
	virtual void Show()
	{
		if (time_p * cost_p/ count_p > time_g * cost_g/ count_g)
		{
			cout << "������� ��� ���������� ��������, ��� ��� �����" << endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}
		else
		{
			cout << "������� ��� ����� ��������, ��� ��� �����" << endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}

	}
	int Getcost_p()
	{
		return time_p * cost_p/ count_p;
	}
	int Getcost_g()
	{
		return time_g * cost_g/ count_g;
	}
};
class Povoz :public Transport
{
	int cost_p = 40;
	int cost_g = 25;
public:
	virtual void Set()
	{
		cout << endl << "������� ����� ������� ��� ��������(�������)" << endl;
		cin >> time_p;
		cout << endl << "������� ����� ������� ��� �����(�������)" << endl;
		cin >> time_g;
		cout << endl << "������� ���������� �����(�������)" << endl;
		cin >> count_p;
		cout << endl << "�������  ���������� �����(�������)" << endl;
		cin >> count_g;
	}
	virtual void Show()
	{
		if (time_p * cost_p / count_p > time_g * cost_g / count_g)
		{
			cout << "������� ��� ���������� ��������, ��� ��� �����" << endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}
		else
		{
			cout << "������� ��� ����� ��������, ��� ��� �����" << endl;
			cout << "��������� ��� �����:" << time_p * cost_p/ count_p << endl;
			cout << "��������� ��� �����:" << time_g * cost_g/ count_g << endl;
		}

	}

	int Getcost_p()
	{
		return time_p * cost_p/ count_p;
	}
	int Getcost_g()
	{
		return time_g * cost_g/ count_g;
	}
};

class raschet
{
public:
	double S;
	virtual void plohad() = 0;

};
class pram : public raschet
{
	int a;
	int b;
public:
	pram()
	{
		a =0;
		b = 0;
	}
	pram(int a1,int b1)
	{
		 a=a1;
		 b=b1;
	}
	virtual void plohad()
	{
		S = (double)a * b;
		cout << S << endl;
	}

};
class krug : public raschet
{
	int R;
public:
	krug()
	{
		R = 0;

	}
	krug(int R1)
	{
		R = R1;
	}
	virtual void plohad()
	{
		S = 3,14*R;
		cout << S << endl;
	}

};
class pramtre : public raschet
{
	int a;
	int b;
public:
	pramtre()
	{
		a = 0;
		b = 0;
	}
	pramtre(int a1, int b1)
	{
		a = a1;
		b = b1;
	}
	virtual void plohad()
	{
		S = 0,5*a*b;
		cout << S << endl;
	}

};
class tre : public raschet
{
	int a;
	int h;
public:
	tre()
	{
		a = 0;
		h = 0;
	}
	tre(int a1, int h1)
	{
		a = a1;
		h = h1;
	}
	virtual void plohad()
	{
		S = 0, 5 *h* a;
		cout << S << endl;
	}

};
class trapez : public raschet
{
	int a;
	int b;
	int h;
public:
	trapez()
	{
		a = 0;
		b = 0;
		h = 0;
	}
	trapez(int a1, int h1,int b1)
	{
		a = a1;
		b = b1;
		h = h1;
	}
	virtual void plohad()
	{
		S = 0,5*h*(a+b);
		cout << S << endl;
	}
};
void main()
{
	/*Pet* animals[4] = { new Dog("Bob",4,24,17,60,54,"avcharka"),new Cat("Murka",3,2,7,89,5,"seam"),new Papugai("Kesha",4,24,6,76,8,"voln") ,new Hom("Lox",4,24,65,89,78,"djun") };
	for (int i = 0; i < 4; i++)
	{
		animals[i]->Show();
		animals[i]->Sound();
		animals[i]->Type();
		cout << endl;
	}*/
	setlocale(0, "rus");
	Car car;
	Bike bike;
	Povoz povoz;
	car.Set();
	bike.Set();
	povoz.Set();
	if ((car.Getcost_p() < bike.Getcost_p()) && (car.Getcost_p() < povoz.Getcost_p()))
	{
		cout << "��� ���������� �������� ������"<<endl;
		cout << "���������:" << car.Getcost_p() << "$" << endl;
	}
	else
	{
		if (bike.Getcost_p() < povoz.Getcost_p())
		{
			cout << "��� ���������� ��������� ��������" << endl;
			cout << "���������:" << bike.Getcost_p() << "$" << endl;
		}
		else
		{
			cout << "��� ���������� ������� ��������" << endl;
			cout << "���������:" << povoz.Getcost_p() << "$" << endl;
		}
	}

	if ((car.Getcost_g() < bike.Getcost_g()) && (car.Getcost_g() < povoz.Getcost_g()))
	{
		cout << "��� ����� �������� ������" << endl;
		cout << "���������:" << car.Getcost_g()<<"$" << endl;
	}
	else
	{
		if (bike.Getcost_g() < povoz.Getcost_g())
		{
			cout << "��� ����� ��������� ��������" << endl;
			cout << "���������:" << bike.Getcost_g() << "$" << endl;
		}
		else
		{
			cout << "��� ����� ������� ��������" << endl;
			cout << "���������:" << povoz.Getcost_g() << "$" << endl;
		}
	}


}