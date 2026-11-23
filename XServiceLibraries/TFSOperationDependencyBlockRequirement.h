//
#ifndef TFSOperationDependencyBlockRequirement_h
#define TFSOperationDependencyBlockRequirement_h
@import Foundation;

#include "TFSOperationDependencyRequirement.h"

@interface TFSOperationDependencyBlockRequirement : TFSOperationDependencyRequirement

@property (readonly, copy, nonatomic) id /* block */ block;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSOperationDependencyBlockRequirement_h */
