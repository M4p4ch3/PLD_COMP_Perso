
// Generated from Prog.g4 by ANTLR 4.7.1


#include "ProgLexer.h"


using namespace antlr4;


ProgLexer::ProgLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ProgLexer::~ProgLexer() {
  delete _interpreter;
}

std::string ProgLexer::getGrammarFileName() const {
  return "Prog.g4";
}

const std::vector<std::string>& ProgLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ProgLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ProgLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ProgLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ProgLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ProgLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ProgLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ProgLexer::_decisionToDFA;
atn::PredictionContextCache ProgLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ProgLexer::_atn;
std::vector<uint16_t> ProgLexer::_serializedATN;

std::vector<std::string> ProgLexer::_ruleNames = {
  u8"T__0", u8"Decl", u8"Type", u8"Name", u8"DefFun"
};

std::vector<std::string> ProgLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ProgLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ProgLexer::_literalNames = {
  "", u8"'\n'", "", "", "", u8"'void main(){}'"
};

std::vector<std::string> ProgLexer::_symbolicNames = {
  "", "", u8"Decl", u8"Type", u8"Name", u8"DefFun"
};

dfa::Vocabulary ProgLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ProgLexer::_tokenNames;

ProgLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x7, 0x32, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1c, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x20, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x23, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 
    0x6, 0xb, 0x7, 0x3, 0x2, 0x4, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x5, 
    0x2, 0x32, 0x3b, 0x43, 0x5c, 0x63, 0x7c, 0x2, 0x33, 0x2, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x7, 0xc, 0x2, 0x2, 0xe, 0x4, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
    0x5, 0x7, 0x4, 0x2, 0x10, 0x11, 0x7, 0x22, 0x2, 0x2, 0x11, 0x12, 0x5, 
    0x9, 0x5, 0x2, 0x12, 0x13, 0x7, 0x3d, 0x2, 0x2, 0x13, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x15, 0x7, 0x6b, 0x2, 0x2, 0x15, 0x16, 0x7, 0x70, 0x2, 
    0x2, 0x16, 0x1c, 0x7, 0x76, 0x2, 0x2, 0x17, 0x18, 0x7, 0x65, 0x2, 0x2, 
    0x18, 0x19, 0x7, 0x6a, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x63, 0x2, 0x2, 0x1a, 
    0x1c, 0x7, 0x74, 0x2, 0x2, 0x1b, 0x14, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x8, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x21, 0x9, 
    0x2, 0x2, 0x2, 0x1e, 0x20, 0x9, 0x3, 0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x78, 0x2, 0x2, 0x25, 
    0x26, 0x7, 0x71, 0x2, 0x2, 0x26, 0x27, 0x7, 0x6b, 0x2, 0x2, 0x27, 0x28, 
    0x7, 0x66, 0x2, 0x2, 0x28, 0x29, 0x7, 0x22, 0x2, 0x2, 0x29, 0x2a, 0x7, 
    0x6f, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x63, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x6b, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0x70, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x2a, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x2b, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x7d, 0x2, 0x2, 
    0x30, 0x31, 0x7, 0x7f, 0x2, 0x2, 0x31, 0xc, 0x3, 0x2, 0x2, 0x2, 0x5, 
    0x2, 0x1b, 0x21, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ProgLexer::Initializer ProgLexer::_init;
