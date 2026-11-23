//
#ifndef TSAAuthorizationManager_T1Onboarding_h
#define TSAAuthorizationManager_T1Onboarding_h
@import Foundation;

@interface TSAAuthorizationManager (T1Onboarding) <TwitterNotifications.NotificationAuthorizationStatusUpdating>

/* instance methods */
- (void)updateNotificationAuthorizationStatusWith:(id /* block */)with;
- (void)queryCanShowOneStepSystemPromptForServiceType:(long long)type context:(id)context completion:(id /* block */)completion;
- (void)showOneStepSystemPromptForServiceType:(long long)type context:(id)context completion:(id /* block */)completion;

@end

#endif /* TSAAuthorizationManager_T1Onboarding_h */
