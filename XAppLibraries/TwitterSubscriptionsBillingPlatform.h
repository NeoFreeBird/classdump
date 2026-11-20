//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TwitterSubscriptionsBillingPlatform_h
#define TwitterSubscriptionsBillingPlatform_h
@import Foundation;

@class NSObject;

@interface TwitterSubscriptionsBillingPlatform : NSObject // (Swift)

/* class methods */
+ (id)apple;
+ (id)google;

/* instance methods */
- (id)init;

@end

#endif /* TwitterSubscriptionsBillingPlatform_h */
