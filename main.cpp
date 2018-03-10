
#include <iostream>

#include "antlr4-runtime.h"

#include "ProgLexer.h"
#include "ProgParser.h"
#include "ProgBaseVisitor.h"
#include "Prog.h"

using namespace antlr4;
using namespace std;

int main(int, const char **) 
{
	ANTLRInputStream input("int n1;char M2;void main(){}");
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	ProgParser parser(&tokens);
	tree::ParseTree * tree = parser.prog();

	Prog visitor;

	visitor.visit(tree);
	cout << "Ok" << endl;

	return 0;
}
