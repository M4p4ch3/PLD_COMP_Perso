
// Generated from ./Prog.g4 by ANTLR 4.7.1


#include "ProgVisitor.h"

#include "ProgParser.h"


using namespace antlrcpp;
using namespace antlr4;

ProgParser::ProgParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ProgParser::~ProgParser() {
  delete _interpreter;
}

std::string ProgParser::getGrammarFileName() const {
  return "Prog.g4";
}

const std::vector<std::string>& ProgParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ProgParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ProgParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::ProgContext::getRuleIndex() const {
  return ProgParser::RuleProg;
}

void ProgParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LprogContext ------------------------------------------------------------------

ProgParser::FunContext* ProgParser::LprogContext::fun() {
  return getRuleContext<ProgParser::FunContext>(0);
}

std::vector<ProgParser::DeclContext *> ProgParser::LprogContext::decl() {
  return getRuleContexts<ProgParser::DeclContext>();
}

ProgParser::DeclContext* ProgParser::LprogContext::decl(size_t i) {
  return getRuleContext<ProgParser::DeclContext>(i);
}

ProgParser::LprogContext::LprogContext(ProgContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LprogContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLprog(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::ProgContext* ProgParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ProgParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<ProgContext *>(_tracker.createInstance<ProgParser::LprogContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(18);
        decl(); 
      }
      setState(23);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(24);
    fun();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunContext ------------------------------------------------------------------

ProgParser::FunContext::FunContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::FunContext::getRuleIndex() const {
  return ProgParser::RuleFun;
}

void ProgParser::FunContext::copyFrom(FunContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LfunContext ------------------------------------------------------------------

ProgParser::TyperetourContext* ProgParser::LfunContext::typeretour() {
  return getRuleContext<ProgParser::TyperetourContext>(0);
}

tree::TerminalNode* ProgParser::LfunContext::Name() {
  return getToken(ProgParser::Name, 0);
}

ProgParser::ParamsContext* ProgParser::LfunContext::params() {
  return getRuleContext<ProgParser::ParamsContext>(0);
}

ProgParser::BlocContext* ProgParser::LfunContext::bloc() {
  return getRuleContext<ProgParser::BlocContext>(0);
}

ProgParser::LfunContext::LfunContext(FunContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LfunContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLfun(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::FunContext* ProgParser::fun() {
  FunContext *_localctx = _tracker.createInstance<FunContext>(_ctx, getState());
  enterRule(_localctx, 2, ProgParser::RuleFun);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FunContext *>(_tracker.createInstance<ProgParser::LfunContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(26);
    typeretour();
    setState(27);
    match(ProgParser::Name);
    setState(28);
    match(ProgParser::T__0);
    setState(29);
    params();
    setState(30);
    match(ProgParser::T__1);
    setState(31);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

ProgParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::ParamsContext::getRuleIndex() const {
  return ProgParser::RuleParams;
}

void ProgParser::ParamsContext::copyFrom(ParamsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LparamsVoidContext ------------------------------------------------------------------

ProgParser::LparamsVoidContext::LparamsVoidContext(ParamsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LparamsVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLparamsVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LparamsContext ------------------------------------------------------------------

std::vector<ProgParser::ParamContext *> ProgParser::LparamsContext::param() {
  return getRuleContexts<ProgParser::ParamContext>();
}

ProgParser::ParamContext* ProgParser::LparamsContext::param(size_t i) {
  return getRuleContext<ProgParser::ParamContext>(i);
}

ProgParser::LparamsContext::LparamsContext(ParamsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LparamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLparams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LparamsEpsilonContext ------------------------------------------------------------------

ProgParser::LparamsEpsilonContext::LparamsEpsilonContext(ParamsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LparamsEpsilonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLparamsEpsilon(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::ParamsContext* ProgParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 4, ProgParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::T__2: {
        _localctx = dynamic_cast<ParamsContext *>(_tracker.createInstance<ProgParser::LparamsVoidContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(33);
        match(ProgParser::T__2);
        break;
      }

      case ProgParser::T__6:
      case ProgParser::T__7:
      case ProgParser::T__8: {
        _localctx = dynamic_cast<ParamsContext *>(_tracker.createInstance<ProgParser::LparamsContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(34);
        param();
        setState(39);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ProgParser::T__3) {
          setState(35);
          match(ProgParser::T__3);
          setState(36);
          param();
          setState(41);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ProgParser::T__1: {
        _localctx = dynamic_cast<ParamsContext *>(_tracker.createInstance<ProgParser::LparamsEpsilonContext>(_localctx));
        enterOuterAlt(_localctx, 3);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

ProgParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::ParamContext::getRuleIndex() const {
  return ProgParser::RuleParam;
}

void ProgParser::ParamContext::copyFrom(ParamContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LparamContext ------------------------------------------------------------------

ProgParser::TypeContext* ProgParser::LparamContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

tree::TerminalNode* ProgParser::LparamContext::Name() {
  return getToken(ProgParser::Name, 0);
}

ProgParser::LparamContext::LparamContext(ParamContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LparamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLparam(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::ParamContext* ProgParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 6, ProgParser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<ProgParser::LparamContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(45);
    type();
    setState(46);
    match(ProgParser::Name);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

ProgParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::BlocContext::getRuleIndex() const {
  return ProgParser::RuleBloc;
}

void ProgParser::BlocContext::copyFrom(BlocContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LblocContext ------------------------------------------------------------------

std::vector<ProgParser::InstrContext *> ProgParser::LblocContext::instr() {
  return getRuleContexts<ProgParser::InstrContext>();
}

ProgParser::InstrContext* ProgParser::LblocContext::instr(size_t i) {
  return getRuleContext<ProgParser::InstrContext>(i);
}

ProgParser::LblocContext::LblocContext(BlocContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LblocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLbloc(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::BlocContext* ProgParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 8, ProgParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BlocContext *>(_tracker.createInstance<ProgParser::LblocContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(ProgParser::T__4);
    setState(55);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ProgParser::T__6)
        | (1ULL << ProgParser::T__7)
        | (1ULL << ProgParser::T__8))) != 0)) {
        setState(49);
        instr();
        setState(54);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
    setState(57);
    match(ProgParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstrContext ------------------------------------------------------------------

ProgParser::InstrContext::InstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::InstrContext::getRuleIndex() const {
  return ProgParser::RuleInstr;
}

void ProgParser::InstrContext::copyFrom(InstrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LinstrDeclContext ------------------------------------------------------------------

ProgParser::DeclContext* ProgParser::LinstrDeclContext::decl() {
  return getRuleContext<ProgParser::DeclContext>(0);
}

ProgParser::LinstrDeclContext::LinstrDeclContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LinstrDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLinstrDecl(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::InstrContext* ProgParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 10, ProgParser::RuleInstr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ProgParser::LinstrDeclContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(59);
    decl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TyperetourContext ------------------------------------------------------------------

ProgParser::TyperetourContext::TyperetourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::TyperetourContext::getRuleIndex() const {
  return ProgParser::RuleTyperetour;
}

void ProgParser::TyperetourContext::copyFrom(TyperetourContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LtypeContext ------------------------------------------------------------------

ProgParser::TypeContext* ProgParser::LtypeContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

ProgParser::LtypeContext::LtypeContext(TyperetourContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLtype(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtyperetourVoidContext ------------------------------------------------------------------

ProgParser::LtyperetourVoidContext::LtyperetourVoidContext(TyperetourContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LtyperetourVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLtyperetourVoid(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::TyperetourContext* ProgParser::typeretour() {
  TyperetourContext *_localctx = _tracker.createInstance<TyperetourContext>(_ctx, getState());
  enterRule(_localctx, 12, ProgParser::RuleTyperetour);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::T__2: {
        _localctx = dynamic_cast<TyperetourContext *>(_tracker.createInstance<ProgParser::LtyperetourVoidContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(61);
        match(ProgParser::T__2);
        break;
      }

      case ProgParser::T__6:
      case ProgParser::T__7:
      case ProgParser::T__8: {
        _localctx = dynamic_cast<TyperetourContext *>(_tracker.createInstance<ProgParser::LtypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(62);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ProgParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::TypeContext::getRuleIndex() const {
  return ProgParser::RuleType;
}

void ProgParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Lint32_tContext ------------------------------------------------------------------

ProgParser::Lint32_tContext::Lint32_tContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::Lint32_tContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLint32_t(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Lint64_tContext ------------------------------------------------------------------

ProgParser::Lint64_tContext::Lint64_tContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::Lint64_tContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLint64_t(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LcharContext ------------------------------------------------------------------

ProgParser::LcharContext::LcharContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLchar(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::TypeContext* ProgParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 14, ProgParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::T__6: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ProgParser::LcharContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(65);
        match(ProgParser::T__6);
        break;
      }

      case ProgParser::T__7: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ProgParser::Lint32_tContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(66);
        match(ProgParser::T__7);
        break;
      }

      case ProgParser::T__8: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ProgParser::Lint64_tContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(67);
        match(ProgParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

ProgParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::DeclContext::getRuleIndex() const {
  return ProgParser::RuleDecl;
}

void ProgParser::DeclContext::copyFrom(DeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LdeclContext ------------------------------------------------------------------

ProgParser::TypeContext* ProgParser::LdeclContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

tree::TerminalNode* ProgParser::LdeclContext::Name() {
  return getToken(ProgParser::Name, 0);
}

ProgParser::LdeclContext::LdeclContext(DeclContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::LdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitLdecl(this);
  else
    return visitor->visitChildren(this);
}
ProgParser::DeclContext* ProgParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 16, ProgParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DeclContext *>(_tracker.createInstance<ProgParser::LdeclContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(70);
    type();
    setState(71);
    match(ProgParser::Name);
    setState(72);
    match(ProgParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ProgParser::_decisionToDFA;
atn::PredictionContextCache ProgParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ProgParser::_atn;
std::vector<uint16_t> ProgParser::_serializedATN;

std::vector<std::string> ProgParser::_ruleNames = {
  "prog", "fun", "params", "param", "bloc", "instr", "typeretour", "type", 
  "decl"
};

std::vector<std::string> ProgParser::_literalNames = {
  "", "'('", "')'", "'void'", "','", "'{'", "'}'", "'char'", "'int32_t'", 
  "'int64_t'", "';'"
};

std::vector<std::string> ProgParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "Name", "WS"
};

dfa::Vocabulary ProgParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ProgParser::_tokenNames;

ProgParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xe, 0x4d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x7, 
    0x2, 0x16, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x19, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x28, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2e, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x35, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x38, 0xb, 0x6, 0x5, 0x6, 0x3a, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x42, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x47, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x2, 0x2, 0xb, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x2, 0x2, 0x2, 0x4c, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x41, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x12, 0x48, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 
    0x5, 0x12, 0xa, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1d, 0x5, 0xe, 0x8, 0x2, 0x1d, 0x1e, 0x7, 0xd, 0x2, 0x2, 0x1e, 
    0x1f, 0x7, 0x3, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x6, 0x4, 0x2, 0x20, 0x21, 
    0x7, 0x4, 0x2, 0x2, 0x21, 0x22, 0x5, 0xa, 0x6, 0x2, 0x22, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x24, 0x29, 0x5, 0x8, 
    0x5, 0x2, 0x25, 0x26, 0x7, 0x6, 0x2, 0x2, 0x26, 0x28, 0x5, 0x8, 0x5, 
    0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x30, 0x5, 0x10, 0x9, 0x2, 0x30, 0x31, 0x7, 0xd, 0x2, 
    0x2, 0x31, 0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x39, 0x7, 0x7, 0x2, 0x2, 
    0x33, 0x35, 0x5, 0xc, 0x7, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x8, 0x2, 
    0x2, 0x3c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x12, 0xa, 0x2, 
    0x3e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x7, 0x5, 0x2, 0x2, 0x40, 
    0x42, 0x5, 0x10, 0x9, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0xf, 0x3, 0x2, 0x2, 0x2, 0x43, 0x47, 0x7, 
    0x9, 0x2, 0x2, 0x44, 0x47, 0x7, 0xa, 0x2, 0x2, 0x45, 0x47, 0x7, 0xb, 
    0x2, 0x2, 0x46, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x49, 0x5, 0x10, 0x9, 0x2, 0x49, 0x4a, 0x7, 0xd, 0x2, 0x2, 0x4a, 
    0x4b, 0x7, 0xc, 0x2, 0x2, 0x4b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9, 0x17, 
    0x29, 0x2d, 0x36, 0x39, 0x41, 0x46, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ProgParser::Initializer ProgParser::_init;
