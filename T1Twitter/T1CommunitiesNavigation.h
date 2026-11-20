//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CommunitiesNavigation_h
#define T1CommunitiesNavigation_h
@import Foundation;

@class NSObject;

@interface T1CommunitiesNavigation : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *wrappedNavigation;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)presentAddRuleFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentAdminToolsFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentCommunitySearchFrom:(id)from communityID:(id)id animated:(_Bool)animated query:(id)query completion:(id /* block */)completion;
- (void)presentCommunitiesSearchFrom:(id)from animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentCommunityFrom:(id)from communityID:(id)id forceReloadCommunity:(_Bool)community shouldShowNewCommunityPrompt:(_Bool)prompt animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentCommunityPickerFrom:(id)from didSelectCommunity:(id /* block */)community animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentCreateCommunityFrom:(id)from animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentInviteMembersFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentJoinRequestsFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentManageRulesFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentMembersFrom:(id)from communityID:(id)id selectedSegment:(long long)segment animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentReviewReportedTweetsFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentSettingsFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentUpdateMembershipFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentUpdateNameFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentUpdatePurposeFrom:(id)from communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (void)shareTweetInCommunityFrom:(id)from status:(id)status communityID:(id)id animated:(_Bool)animated completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1CommunitiesNavigation_h */
