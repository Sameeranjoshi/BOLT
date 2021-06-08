//===--------- Passes/DummyPass.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TOOLS_LLVM_BOLT_PASSES_LOOPDUMMYPASS_H
#define LLVM_TOOLS_LLVM_BOLT_PASSES_LOOPDUMMYPASS_H

#include "BinaryPasses.h"
namespace llvm {
namespace bolt {

/*class DummyPass : public BinaryFunctionPass {
public:
  explicit DummyPass() : BinaryFunctionPass(false) {}

  const char *getName() const override { return "dummy-pass"; }

  /// Pass entry point
  void runOnFunctions(BinaryContext &BC) override;
  bool runOnFunction(BinaryFunction &Function);
};

*/
} // namespace bolt
} // namespace llvm

#endif
