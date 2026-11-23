//
#ifndef TFNTwitterCompositionUpdateStatusStateRequirement_h
#define TFNTwitterCompositionUpdateStatusStateRequirement_h
@import Foundation;

@class TFSOperationDependencyRequirement;

@interface TFNTwitterCompositionUpdateStatusStateRequirement : TFSOperationDependencyRequirement

/* instance methods */
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TFNTwitterCompositionUpdateStatusStateRequirement_h */
