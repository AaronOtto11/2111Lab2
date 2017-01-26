#include "ReadFile.h"
#include <iostream>
#include <string>

Readfile::ReadFile(const char* file_name)
{
   

   rf-input_file.open(file_name);
   closed = false;
	_eof = false;

  
}

Readfile::~ReadFile()
{
   close();
}

Readfile::bool eof()
{
   return _eof;
}

Readfile::void close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

Readfile::String* readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
