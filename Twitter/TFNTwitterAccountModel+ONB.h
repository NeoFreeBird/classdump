//
#ifndef TFNTwitterAccountModel_ONB_h
#define TFNTwitterAccountModel_ONB_h
@import Foundation;

@interface TFNTwitterAccountModel (ONB)

/* instance methods */
- (void)buildStatusesFromStatusBundles:(id)bundles authenticatedAccountUserID:(long long)id completion:(id /* block */)completion;
- (void)onboardingTweetGroupsForOCFTweetGroups:(id)groups authenticatedAccountUserID:(long long)id completion:(id /* block */)completion;

@end

#endif /* TFNTwitterAccountModel_ONB_h */
