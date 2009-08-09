/* $Id: error.h,v 1.1 2008/01/25 11:47:49 ruthe Exp $ */

#ifndef _ERROR_H
#define _ERROR_H

#include <iostream>
#include <stdlib.h>

#define err(msg) {std::cerr << msg << std::endl; abort();}
#define exitif(test,msg) if(test) {std::cerr << msg << std::endl; abort();}

using namespace std; //df

#ifdef NO_DEBUG
#  define errif(test,msg) {}
#else
#  define errif(test,msg) exitif(test,msg)
#endif

#endif 
