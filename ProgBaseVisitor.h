
// Generated from Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ProgVisitor.h"


/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ProgBaseVisitor : public ProgVisitor {
public:

  virtual antlrcpp::Any visitProg(ProgParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }


};

