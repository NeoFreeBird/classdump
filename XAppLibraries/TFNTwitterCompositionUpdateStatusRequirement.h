//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
