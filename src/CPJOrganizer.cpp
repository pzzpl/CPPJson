#include "CPJOrganizer.h"
void CPJOrganizer::link(CPJ* prev, CPJ* next) {
	prev->setNext(next);
	next->setPrev(prev);
}

void CPJOrganizer::addItem2CPJObj(CPJ_obj* root, string  name, CPJ* item) {
	CPJ* ptr = root->getChild();
	while (ptr) {
		ptr = ptr->getNext();
	}

	item->setNext(0);

	item->setName(name);

	link(ptr, item);

}
void CPJOrganizer::addItem2CPHArray(CPJ_array* array, CPJ* item) {
	CPJ* ptr = array->getChild();
	while (ptr) {
		ptr = ptr->getNext();
	}
	item->setNext(0);
	link(ptr, item);
}