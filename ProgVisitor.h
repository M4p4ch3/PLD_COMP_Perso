
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
    virtual antlrcpp::Any visitLprog(ProgParser::LprogContext *context) = 0;

    virtual antlrcpp::Any visitLfun(ProgParser::LfunContext *context) = 0;

    virtual antlrcpp::Any visitLparamsVoid(ProgParser::LparamsVoidContext *context) = 0;

    virtual antlrcpp::Any visitLparams(ProgParser::LparamsContext *context) = 0;

    virtual antlrcpp::Any visitLparamsEpsilon(ProgParser::LparamsEpsilonContext *context) = 0;

    virtual antlrcpp::Any visitLparam(ProgParser::LparamContext *context) = 0;

    virtual antlrcpp::Any visitLbloc(ProgParser::LblocContext *context) = 0;

    virtual antlrcpp::Any visitLinstrDecl(ProgParser::LinstrDeclContext *context) = 0;

    virtual antlrcpp::Any visitLtyperetourVoid(ProgParser::LtyperetourVoidContext *context) = 0;

    virtual antlrcpp::Any visitLtype(ProgParser::LtypeContext *context) = 0;

    virtual antlrcpp::Any visitLchar(ProgParser::LcharContext *context) = 0;

    virtual antlrcpp::Any visitLint32_t(ProgParser::Lint32_tContext *context) = 0;

    virtual antlrcpp::Any visitLint64_t(ProgParser::Lint64_tContext *context) = 0;

    virtual antlrcpp::Any visitLdecl(ProgParser::LdeclContext *context) = 0;


};

