#ifndef BANDIT_BANDIT_H
#define BANDIT_BANDIT_H

#include <cassert>
#include <functional>
#include <iostream>
#include <list>
#include <deque>

namespace bandit { namespace detail {
  typedef std::function<void ()> voidfunc_t;
}}

#include <bandit/assertion_frameworks/snowhouse/snowhouse/snowhouse.h>
using namespace snowhouse;

#include <bandit/registration/registration.h>
#include <bandit/assertion_exception.h>
#include <bandit/adapters/adapters.h>
#include <bandit/reporters/reporters.h>
#include <bandit/context.h>
#include <bandit/grammar.h>
#include <bandit/runner.h>

#endif