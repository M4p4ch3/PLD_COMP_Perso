
// Generated from Prog.g4 by ANTLR 4.7.1


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

tree::TerminalNode* ProgParser::ProgContext::DefFun() {
  return getToken(ProgParser::DefFun, 0);
}

std::vector<ProgParser::DeclContext *> ProgParser::ProgContext::decl() {
  return getRuleContexts<ProgParser::DeclContext>();
}

ProgParser::DeclContext* ProgParser::ProgContext::decl(size_t i) {
  return getRuleContext<ProgParser::DeclContext>(i);
}


size_t ProgParser::ProgContext::getRuleIndex() const {
  return ProgParser::RuleProg;
}

antlrcpp::Any ProgParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ProgContext* ProgParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ProgParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgParser::Type) {
      setState(4);
      decl();
      setState(9);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(10);
    match(ProgParser::DefFun);
    setState(11);
    match(ProgParser::T__0);
   
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

tree::TerminalNode* ProgParser::DeclContext::Type() {
  return getToken(ProgParser::Type, 0);
}

tree::TerminalNode* ProgParser::DeclContext::Name() {
  return getToken(ProgParser::Name, 0);
}


size_t ProgParser::DeclContext::getRuleIndex() const {
  return ProgParser::RuleDecl;
}

antlrcpp::Any ProgParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::DeclContext* ProgParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, ProgParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13);
    match(ProgParser::Type);
    setState(14);
    match(ProgParser::T__1);
    setState(15);
    match(ProgParser::Name);
    setState(16);
    match(ProgParser::T__2);
   
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
  "prog", "decl"
};

std::vector<std::string> ProgParser::_literalNames = {
  "", "'\n'", "' '", "';'", "", "", "'void main(){}'"
};

std::vector<std::string> ProgParser::_symbolicNames = {
  "", "", "", "", "Type", "Name", "DefFun"
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
    0x3, 0x8, 0x15, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x7, 
    0x2, 0x8, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xb, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0x13, 0x2, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6, 0x8, 0x5, 0x4, 0x3, 0x2, 
    0x7, 0x6, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x3, 0x2, 0x2, 0x2, 0x9, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x7, 0x8, 0x2, 0x2, 
    0xd, 0xe, 0x7, 0x3, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
    0x7, 0x6, 0x2, 0x2, 0x10, 0x11, 0x7, 0x4, 0x2, 0x2, 0x11, 0x12, 0x7, 
    0x7, 0x2, 0x2, 0x12, 0x13, 0x7, 0x5, 0x2, 0x2, 0x13, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x3, 0x9, 
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
