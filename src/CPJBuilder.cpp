#include "CPJBuilder.h"
#include "CPJ.h"
CPJ_obj*  CPJBuilder::create_Obj() {
	CPJ_obj* item = new CPJ_obj;
	if (!item) {
		exit(1);
	}
	insert_alloc_recoder(item);
	return item;
}

CPJ_array* CPJBuilder::create_array() {
	CPJ_array* item = new CPJ_array;
	if (!item) {
		exit(1);
	}
	insert_alloc_recoder(item);
	return item;
}

CPJ_dnum* CPJBuilder::create_dnum(double dnum) {
	CPJ_dnum* item = new CPJ_dnum;
	item->setNum(dnum);
	insert_alloc_recoder(item);
	return item;
}

CPJ_inum* CPJBuilder::create_inum(int inum) {
	CPJ_inum* item = new CPJ_inum;
	item->setNum(inum);
	insert_alloc_recoder(item);
	return item;
}

CPJ_string* CPJBuilder::create_string(const string& s) {
	CPJ_string* item = new CPJ_string;
	item->setString(s);
	insert_alloc_recoder(item);
	return item;
}
CPJ_bool* CPJBuilder::create_bool(bool b) {
	CPJ_bool* item = new CPJ_bool;
	item->setBool(b);
	insert_alloc_recoder(item);
	return item;
}
