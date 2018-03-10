
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
	char * fileContent;
	long fileSize;

	FILE * file = fopen("Prog", "rb");

	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	fileContent = (char *) malloc(fileSize * (sizeof(char)));
	fread(fileContent, sizeof(char), fileSize, file);

	fclose(file);

	ANTLRInputStream input(fileContent);
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	ProgParser parser(&tokens);
	tree::ParseTree * tree = parser.prog();

	Prog visitor;

	visitor.visit(tree);
	cout << "Ok" << endl;

	return 0;
}
