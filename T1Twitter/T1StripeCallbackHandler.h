//
#ifndef T1StripeCallbackHandler_h
#define T1StripeCallbackHandler_h
@import Foundation;

@class NSObject;

@interface T1StripeCallbackHandler : NSObject // (Swift)

/* class methods */
+ (void)handleCallbackURLWithArguments:(id)arguments account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1StripeCallbackHandler_h */
