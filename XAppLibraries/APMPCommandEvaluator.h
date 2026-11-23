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
