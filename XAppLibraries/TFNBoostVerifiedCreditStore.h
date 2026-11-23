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
