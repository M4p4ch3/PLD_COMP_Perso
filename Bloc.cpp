using namespace std;

#include "Bloc.h"
#include <iostream>

ostream& operator<<(ostream& stream, const Bloc& bloc)
{
    stream << "     Bloc:" << endl;
    stream << "         Declarations:" << endl;
    for (auto it :  bloc.declarations){
        stream << "     " << *it;
    }
    stream << endl;
    stream << "         Instructions:" << endl;
    for (auto it :  bloc.instructions){
        stream << "     " << *it;
    }
    stream << endl;
    return stream;
}

void Bloc::addInstruction(Instruction *instruction)
{
    if (Declaration * declarationInstruction = dynamic_cast <Declaration *> (instruction))
    {
        this->declarations.emplace_back(declarationInstruction);
    }

    this->instructions.emplace_back(instruction);
}

Bloc &Bloc::operator=(const Bloc &unBloc) {
}


Bloc::Bloc(const Bloc &unBloc) {
#ifdef MAP
    cout << "Appel au constructeur de copie de <Bloc>" << endl;
#endif
}


Bloc::Bloc() {
#ifdef MAP
    cout << "Appel au constructeur de <Bloc>" << endl;
#endif
}


Bloc::~Bloc() {
#ifdef MAP
    cout << "Appel au destructeur de <Bloc>" << endl;
#endif
}
