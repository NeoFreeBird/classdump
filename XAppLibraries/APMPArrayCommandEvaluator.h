//
#ifndef APMPArrayCommandEvaluator_h
#define APMPArrayCommandEvaluator_h
@import Foundation;

@class NSDictionary, NSObject;

@interface APMPArrayCommandEvaluator : NSObject {
    /* instance variables */
    NSDictionary *_handlers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)evaluateCommand:(id)command array:(id)array arguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPArrayCommandEvaluator_h */
