//
#ifndef TFSOperationDependencyNotCancelledRequirement_h
#define TFSOperationDependencyNotCancelledRequirement_h
@import Foundation;

#include "TFSOperationDependencyRequirement.h"

@interface TFSOperationDependencyNotCancelledRequirement : TFSOperationDependencyRequirement

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TFSOperationDependencyNotCancelledRequirement_h */
