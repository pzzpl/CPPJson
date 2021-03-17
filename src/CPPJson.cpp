#include <iostream>
#include "CPJBuilder.h"
#include "CPJOrganizer.h"
int main()
{
    CPJBuilder *builder = new CPJBuilder;
    CPJ_obj* root = builder->create_Obj();


    CPJ_string *node1 = builder->create_string("lzp");

    
    CPJOrganizer::addItem2CPJObj(root,"name", node1);
}
