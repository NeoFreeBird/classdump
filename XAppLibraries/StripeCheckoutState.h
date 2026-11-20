//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
