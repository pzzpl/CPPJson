#ifndef _CPJ_
#define _CPJ_
using namespace std;
class CPJ {
private:
	CPJ* prev, * next;
	string name;
	
public:
	string& getName() { return this->name; }
	void setName(string& name) { this->name = name; }
	virtual ~CPJ() = 0;

	void setNext(CPJ* next) {
		this->next = next;
	}
	CPJ* getNext() {
		return this->next;
	}

	void setPrev(CPJ* prev) {
		this->prev = prev;
	}
	CPJ* getPrev() {
		return this->prev;
	}

};

class CPJ_obj : public CPJ{
private:
	CPJ* child;
public:
	CPJ_obj( string& name) {
		CPJ::setName(name);
	}
	CPJ_obj();
	~CPJ_obj() {};
	CPJ* getChild();
	void setChild( CPJ* child) {
		this->child = child;
	}
};


class CPJ_array : public CPJ {
private:
	CPJ* child;
public:
	CPJ_array();
	CPJ_array( string& name) {
		CPJ::setName(name);
	}
	~CPJ_array() {}
	CPJ* getChild();
	void setChild(CPJ* child) {
		this->child = child;
	}
};


class CPJ_inum : public CPJ {
private:
	int valinum;
public:
	CPJ_inum();
	~CPJ_inum() {}
	int getNum() { return this->valinum; }
	void setNum(int num) { this->valinum = num; }
};
class CPJ_dnum : public CPJ {
private:
	double valdnum;
public:
	CPJ_dnum();
	~CPJ_dnum();
	double getNum() { return this->valdnum; }
	void setNum(double num) { this->valdnum = num; }
};

class CPJ_string : public CPJ {
private:
	string valstring;
public:
	CPJ_string();
	~CPJ_string();
	string getString() { return this->valstring; }
	void setString(const string &s) { this->valstring = s; }
};

class CPJ_bool : public CPJ {
private:
	bool valbool;
public:
	CPJ_bool();
	~CPJ_bool();
	bool getBool() { return this->valbool; }
	void setBool(bool bo) { this->valbool = bo; }
};



#endif