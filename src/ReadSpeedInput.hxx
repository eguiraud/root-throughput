/* Copyright (C) 2020 Enrico Guiraud
   See the LICENSE file in the top directory for more information. */

#include "ReadSpeed.hxx"

namespace ReadSpeed {

void PrintThroughput(const Result &r);

struct Args {
   Data fData;
   unsigned int fNThreads = 0;
   bool fAllBranches = false;
   bool fShouldRun = false;
};

Args ParseArgs(int argc, char **argv);

} // namespace ReadSpeed