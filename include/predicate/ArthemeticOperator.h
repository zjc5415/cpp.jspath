#ifndef JSPATH_ARTHEMETIC_OPERATOR_H
#define JSPATH_ARTHEMETIC_OPERATOR_H
#include "predicate/Operand.h"
namespace jspath
{

class Add: public Operand
{
public:
    double getNumericValue(const Context& cxt, const ptree& input, bool convert) override;
    std::string getStringValue(const Context& cxt, const ptree& input, bool convert) override;

};
}
#endif

