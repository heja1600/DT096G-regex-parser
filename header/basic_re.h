#ifndef BASIC_RE_H
#define BASIC_RE_H

#include "op.h"


struct basic_re : op {
    object *eval(object *o) override{
        return operands[0]->eval(o);
    }
    std::string id() override{
        return "basic_re";
    }
};

#endif /* BASIC_RE_H */
