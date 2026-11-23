//
#ifndef TFSOperationDependencyFailedResultRequirement_h
#define TFSOperationDependencyFailedResultRequirement_h
@import Foundation;

#include "TFSOperationDependencyRequirement.h"

@interface TFSOperationDependencyFailedResultRequirement : TFSOperationDependencyRequirement

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TFSOperationDependencyFailedResultRequirement_h */
