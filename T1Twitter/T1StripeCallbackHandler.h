//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
