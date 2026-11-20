//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
