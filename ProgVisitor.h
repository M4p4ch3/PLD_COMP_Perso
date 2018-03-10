
// Generated from ./Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ProgParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ProgParser.
 */
class  ProgVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ProgParser.
   */
    virtual antlrcpp::Any visitProg(ProgParser::ProgContext *context) = 0;


};

