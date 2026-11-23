//
#ifndef T1SubscriptionErrorTray_h
#define T1SubscriptionErrorTray_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionErrorTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentBillingErrorForSheetType:(long long)type fromViewController:(id)controller;
+ (_Bool)presentBlockedAccountForCreatorUsername:(id)username fromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1SubscriptionErrorTray_h */
