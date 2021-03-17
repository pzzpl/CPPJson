#ifndef _CPJBuilder_
#define _CPJBUilder_
#include "CPJ.h"
#include <string>
#include <vector>
class CPJBuilder {
public:
	CPJ_obj* create_Obj();
	CPJ_array* create_array();
	CPJ_dnum* create_dnum(double dnum);
	CPJ_inum* create_inum(int inum);
	CPJ_string* create_string(const string &s);
	CPJ_bool* create_bool(bool b);

	~CPJBuilder() {
		for (auto p : alloc_recoder)
		{
			delete p;
		}
		printf("delete all alloc recoder entry\n");
	}
	CPJBuilder(){}
private:
	vector<CPJ*> alloc_recoder;
	void insert_alloc_recoder(CPJ* item) {
		if (!item) {
			printf("alloc_recoder item null error\n");
			exit(1);
		}
		alloc_recoder.push_back(item);
	}
};

#endif
