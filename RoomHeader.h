#pragma once
#include <iostream>
using namespace std;

class Room {
public: virtual void rearregement() {};
};
class Bed :public Room {
private:
	int b[];
public:void get_Bname() {
	cout << "Bed (" << b[0] << ";" << b[1] << ")" << endl;
}
	  void get_LocationB() {
		  cout << "Enter Bed's location \n" << endl;
		  for (int i = 0; i < 2; i++) {
			  cin >> b[i];
		  }
	  }
	  void rearregement() {
		  for (int i = 0; i < 2; i++) {
			  cin >> b[i];
		  }
		  cout << "New bed's location is (" << b[0] << ";" << b[1] << ")" << endl;
	  };
};
class Table :public Room {
private:
	int t[];
public: void get_Tname() {
	cout << "Table (" << t[0] << ";" << t[1] << ")" << endl;
}
	  void get_LocationT() {
		  cout << "Enter Table's location \n" << endl;
		  for (int i = 0; i < 2; i++) {
			  cin >> t[i];
		  }
	  }
	  void rearregement() {
		  for (int i = 0; i < 2; i++) {
			  cin >> t[i];
		  }
		  cout << "New table's location is (" << t[0] << ";" << t[1] << ")" << endl;
	  };
};
class Carpet :public Room {
private:
	int c[];
public: void get_Cname() {

	cout << "Carpet (" << c[0] << ";" << c[1] << ")" << endl;
};

	  void get_LocationC() {
		  cout << "Enter carpet's location \n" << endl;
		  for (int i = 0; i < 2; i++) {
			  cin >> c[i];
		  }
	  }
	  void rearregement() {
		  for (int i = 0; i < 2; i++) {
			  cin >> c[i];
		  }
		  cout << "New carpet's location is (" << c[0] << ";" << c[1] << ")" << endl;
	  };
};