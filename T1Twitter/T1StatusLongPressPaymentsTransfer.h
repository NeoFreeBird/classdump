//
#ifndef T1StatusLongPressPaymentsTransfer_h
#define T1StatusLongPressPaymentsTransfer_h
@import Foundation;

@class NSObject;

@interface T1StatusLongPressPaymentsTransfer : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromLikeIfEligibleForStatus:(id)status account:(id)account from:(id)from sourceView:(id)view scribeContext:(id)context;
+ (_Bool)presentFromAvatarIfEligibleForUser:(id)user account:(id)account from:(id)from sourceView:(id)view scribeContext:(id)context;
+ (_Bool)isAvatarLongPressEligibleForAccount:(id)account fromUser:(id)user;
+ (id)sendMoneyActionItemForUser:(id)user account:(id)account from:(id)from;

/* instance methods */
- (id)init;

@end

#endif /* T1StatusLongPressPaymentsTransfer_h */
