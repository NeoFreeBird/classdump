//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPCommandEvaluator_h
#define APMPCommandEvaluator_h
@import Foundation;

@class NSObject;

@interface APMPCommandEvaluator : NSObject

/* instance methods */
- (id)evaluateCommand:(id)command arguments:(id)arguments scope:(id)scope error:(id *)error;
- (id)allSupportedCommands;

@end

#endif /* APMPCommandEvaluator_h */
