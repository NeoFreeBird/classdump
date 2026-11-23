//
#ifndef TFSOperationDependencyCompletedResultRequirement_h
#define TFSOperationDependencyCompletedResultRequirement_h
@import Foundation;

#include "TFSOperationDependencyRequirement.h"

@interface TFSOperationDependencyCompletedResultRequirement : TFSOperationDependencyRequirement

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TFSOperationDependencyCompletedResultRequirement_h */
