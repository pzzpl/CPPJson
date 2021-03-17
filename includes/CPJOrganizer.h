#ifndef _CPJOrganizer_
#define _CPJOrganizer_
#include "CPJ.h"
#include <string>
class CPJOrganizer {
public:
	static void addItem2CPJObj(CPJ_obj* root,string  name,  CPJ* item);
	static void addItem2CPHArray( CPJ_array* array,  CPJ* item);
	static void link(CPJ* prev, CPJ* next);
};
#endif // !CPJOrganizer

