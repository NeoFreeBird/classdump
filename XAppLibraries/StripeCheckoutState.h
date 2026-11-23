//
#ifndef StripeCheckoutState_h
#define StripeCheckoutState_h
@import Foundation;

@class NSObject;

@interface StripeCheckoutState : NSObject // (Swift)

/* class methods */
+ (_Bool)hasLastCheckout;
+ (_Bool)consumeIsPremiumBasic;

/* instance methods */
- (id)init;

@end

#endif /* StripeCheckoutState_h */
