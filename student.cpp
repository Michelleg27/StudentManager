#include "student.h"

void student::setName(string name1, string name2)
{
first = name1; 
last = name2; 
}
string student::fullName()
{
string name = first; 
name.append(" "); 
name.append(last); 
return name; 
}
