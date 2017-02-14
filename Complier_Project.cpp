// Complier_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Expr.h"
#include "Eval.h"
#include <iostream>
#include <cassert>
#include "Type.h"

int main()
{
	try {
		Context cxt;
		Expr* e2 = new Bool_expr(true);
		Expr* e1 = new Bool_expr(false);
		Expr* e = new AndThen_expr(e1, e2);

		std::cout << "the value is " << eval(e);
		
	}
	catch(char* err){
		std::cout << err;
	}

    return 0;
}

