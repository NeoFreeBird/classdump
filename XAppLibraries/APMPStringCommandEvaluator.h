//
#ifndef APMPStringCommandEvaluator_h
#define APMPStringCommandEvaluator_h
@import Foundation;

@class NSDictionary, NSObject;

@interface APMPStringCommandEvaluator : NSObject {
    /* instance variables */
    NSDictionary *_handlers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)evaluateCommand:(id)command string:(id)string arguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPStringCommandEvaluator_h */
