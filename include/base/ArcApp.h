#ifndef ARCAPP_H
#define ARCAPP_H

#include "MooseApp.h"

class ArcApp;

template<>
InputParameters validParams<ArcApp>();

class ArcApp : public MooseApp
{
public:
  ArcApp(InputParameters parameters);
  virtual ~ArcApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* ARCAPP_H */
