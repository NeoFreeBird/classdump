//
#ifndef TFNTwitterCompositionUpdateStatusRequirement_h
#define TFNTwitterCompositionUpdateStatusRequirement_h
@import Foundation;

@class TFSOperationDependencyRequirement;

@interface TFNTwitterCompositionUpdateStatusRequirement : TFSOperationDependencyRequirement

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TFNTwitterCompositionUpdateStatusRequirement_h */
