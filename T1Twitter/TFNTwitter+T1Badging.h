//
#ifndef TFNTwitter_T1Badging_h
#define TFNTwitter_T1Badging_h
@import Foundation;

@interface TFNTwitter (T1Badging)

/* class methods */
+ (id)accountActionsForAccountID:(id)id;

/* instance methods */
- (id)listsFeature;
- (id)homeFeature;
- (id)hashflagService;
- (void)scheduleRecurringHashflagsUpdateTask;
- (id)onboardingFeature;
- (void)scheduleRecurringForegroundServerAccountBadgesFetchTask;

@end

#endif /* TFNTwitter_T1Badging_h */
