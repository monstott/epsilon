#ifndef POINCARE_COSINE_H
#define POINCARE_COSINE_H

#include <poincare/function.h>

class Cosine : public Function {
  public:
    Cosine(Expression * arg, bool clone_arg=true): Function(arg, (char*) "cos", clone_arg) {}
    float approximate(Context& context) const override;
    Type type() const override;
    Expression * cloneWithDifferentOperands(Expression** newOperands,
        int numberOfOperands, bool cloneOperands = true) const override;
};

#endif