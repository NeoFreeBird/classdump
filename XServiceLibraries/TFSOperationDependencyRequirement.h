//
#ifndef TFSOperationDependencyRequirement_h
#define TFSOperationDependencyRequirement_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSOperationDependencyRequirement : NSObject <NSCopying>

/* class methods */
+ (id)notCancelledRequirement;
+ (id)completedResultRequirement;
+ (id)failedResultRequirement;
+ (id)requirementWithBlock:(id /* block */)block;

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSOperationDependencyRequirement_h */
