
// Generated from ./Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ProgParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, Name = 11, WS = 12
  };

  enum {
    RuleProg = 0, RuleFun = 1, RuleParams = 2, RuleParam = 3, RuleBloc = 4, 
    RuleInstr = 5, RuleTyperetour = 6, RuleType = 7, RuleDecl = 8
  };

  ProgParser(antlr4::TokenStream *input);
  ~ProgParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class FunContext;
  class ParamsContext;
  class ParamContext;
  class BlocContext;
  class InstrContext;
  class TyperetourContext;
  class TypeContext;
  class DeclContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LprogContext : public ProgContext {
  public:
    LprogContext(ProgContext *ctx);

    FunContext *fun();
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();

  class  FunContext : public antlr4::ParserRuleContext {
  public:
    FunContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FunContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LfunContext : public FunContext {
  public:
    LfunContext(FunContext *ctx);

    TyperetourContext *typeretour();
    antlr4::tree::TerminalNode *Name();
    ParamsContext *params();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunContext* fun();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParamsContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParamsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LparamsVoidContext : public ParamsContext {
  public:
    LparamsVoidContext(ParamsContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LparamsContext : public ParamsContext {
  public:
    LparamsContext(ParamsContext *ctx);

    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LparamsEpsilonContext : public ParamsContext {
  public:
    LparamsEpsilonContext(ParamsContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParamsContext* params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParamContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParamContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LparamContext : public ParamContext {
  public:
    LparamContext(ParamContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *Name();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParamContext* param();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BlocContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BlocContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LblocContext : public BlocContext {
  public:
    LblocContext(BlocContext *ctx);

    std::vector<InstrContext *> instr();
    InstrContext* instr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BlocContext* bloc();

  class  InstrContext : public antlr4::ParserRuleContext {
  public:
    InstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstrContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InstrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LinstrDeclContext : public InstrContext {
  public:
    LinstrDeclContext(InstrContext *ctx);

    DeclContext *decl();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstrContext* instr();

  class  TyperetourContext : public antlr4::ParserRuleContext {
  public:
    TyperetourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TyperetourContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TyperetourContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LtypeContext : public TyperetourContext {
  public:
    LtypeContext(TyperetourContext *ctx);

    TypeContext *type();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtyperetourVoidContext : public TyperetourContext {
  public:
    LtyperetourVoidContext(TyperetourContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TyperetourContext* typeretour();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Lint32_tContext : public TypeContext {
  public:
    Lint32_tContext(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Lint64_tContext : public TypeContext {
  public:
    Lint64_tContext(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LcharContext : public TypeContext {
  public:
    LcharContext(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LdeclContext : public DeclContext {
  public:
    LdeclContext(DeclContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *Name();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclContext* decl();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

