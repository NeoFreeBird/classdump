//
#ifndef T1MiniProfileTrayPresenter_h
#define T1MiniProfileTrayPresenter_h
@import Foundation;

@class NSObject;

@interface T1MiniProfileTrayPresenter : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldOpenForTrigger:(long long)trigger surface:(long long)surface account:(id)account;
+ (_Bool)presentMiniProfileForUser:(id)user account:(id)account fromViewController:(id)controller surface:(long long)surface trigger:(long long)trigger scribeContext:(id)context associatedStatus:(id)status makeFullProfileViewController:(id /* block */)controller toggleFollow:(id /* block */)follow scribeGoToProfile:(id /* block */)profile;
+ (_Bool)presentMiniProfileForUserReference:(id)reference account:(id)account fromViewController:(id)controller surface:(long long)surface trigger:(long long)trigger scribeContext:(id)context associatedStatus:(id)status makeFullProfileViewController:(id /* block */)controller toggleFollow:(id /* block */)follow scribeGoToProfile:(id /* block */)profile;
+ (_Bool)shouldOpenOnLongPressForUserReference:(id)reference surface:(long long)surface account:(id)account;
+ (_Bool)shouldOpenOnLongPressForUsernameActiveRange:(id)range account:(id)account;
+ (id)actionScribeContextForHostContext:(id)context presentingController:(id)controller;
+ (_Bool)presentMiniProfileForUsernameActiveRange:(id)range account:(id)account fromViewController:(id)controller trigger:(long long)trigger scribeContext:(id)context associatedStatus:(id)status makeFullProfileViewController:(id /* block */)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1MiniProfileTrayPresenter_h */
