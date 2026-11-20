//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBoostVerifiedCreditStore_h
#define TFNBoostVerifiedCreditStore_h
@import Foundation;

@class NSObject;

@interface TFNBoostVerifiedCreditStore : NSObject // (Swift)

/* class methods */
+ (id)didChangeNotification;
+ (id)accountIDUserInfoKey;
+ (id)scribeOffer;
+ (id)scribeEventInfo;
+ (_Bool)hasOfferForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* TFNBoostVerifiedCreditStore_h */
