%module cchar
%include "cstring.i"
%include "std_string.i"
%{
#include <string>
using namespace std;
extern void FillZero(char*,size_t* pi);
extern string Repeat(const string& s);
%}
using namespace std;
%cstring_output_withsize(char* pc,size_t* pi);
void FillZero(char* pc, size_t* pi);
string Repeat(const string& s);
