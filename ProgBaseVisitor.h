
// Generated from ./Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ProgVisitor.h"


/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ProgBaseVisitor : public ProgVisitor {
public:

  virtual antlrcpp::Any visitLprog(ProgParser::LprogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLfun(ProgParser::LfunContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLparamsVoid(ProgParser::LparamsVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLparams(ProgParser::LparamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLparamsEpsilon(ProgParser::LparamsEpsilonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLparam(ProgParser::LparamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLbloc(ProgParser::LblocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinstrDecl(ProgParser::LinstrDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLtyperetourVoid(ProgParser::LtyperetourVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLtype(ProgParser::LtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLchar(ProgParser::LcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLint32_t(ProgParser::Lint32_tContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLint64_t(ProgParser::Lint64_tContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLdecl(ProgParser::LdeclContext *ctx) override {
    return visitChildren(ctx);
  }


};

