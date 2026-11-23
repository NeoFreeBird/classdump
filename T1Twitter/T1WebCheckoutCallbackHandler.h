//
#ifndef T1WebCheckoutCallbackHandler_h
#define T1WebCheckoutCallbackHandler_h
@import Foundation;

@class NSObject;

@interface T1WebCheckoutCallbackHandler : NSObject // (Swift)

/* class methods */
+ (void)handleCallbackURLWithArguments:(id)arguments;

/* instance methods */
- (id)init;

@end

#endif /* T1WebCheckoutCallbackHandler_h */
