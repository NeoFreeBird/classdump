//
#ifndef T1SocialProofEngagementDelegate_h
#define T1SocialProofEngagementDelegate_h
@import Foundation;

@class NSObject;

@interface T1SocialProofEngagementDelegate : NSObject

/* class methods */
+ (_Bool)supportsSocialContextTapAction:(id)action;
+ (_Bool)supportsUserSocialContextTapAction:(id)action;
+ (void)handleUserSocialContextTapAction:(id)action presentingController:(id)controller scribeContext:(id)context account:(id)account;
+ (id)_t1_scribeSocialContextTapAction:(id)action scribeContext:(id)context;
+ (_Bool)_t1_presentMiniProfileTrayIfEnabledForUserReference:(id)reference presentingController:(id)controller associatedStatus:(id)status trigger:(long long)trigger scribeContext:(id)context account:(id)account;
+ (void)handleSocialContextTapAction:(id)action presentingController:(id)controller associatedStatus:(id)status scribeContext:(id)context account:(id)account;
+ (void)handleSocialContextTapAction:(id)action presentingController:(id)controller associatedStatus:(id)status isLongPress:(_Bool)press scribeContext:(id)context account:(id)account;
+ (id)usersViewControllerForSocialContext:(id)context presentingController:(id)controller associatedStatus:(id)status scribeContext:(id)context account:(id)account isPreview:(_Bool)preview;
+ (id)_usersViewControllerWithUserReferences:(id)references presentingController:(id)controller title:(id)title scribePage:(id)page sourceScribeContext:(id)context account:(id)account;
+ (void)_t1_handleSocialContextURLTapAction:(id)action controller:(id)controller scribeContext:(id)context account:(id)account;

@end

#endif /* T1SocialProofEngagementDelegate_h */
