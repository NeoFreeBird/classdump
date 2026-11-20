//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileViewController_Protocol_h
#define T1ProfileViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1AppNavigationContext.h"
#include "T1ProfileViewModel-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class TFSTwitterScribeContext;

@protocol T1ProfileViewController <NSObject>

@required

@property (nonatomic, retain) id <TAPTweet.TAPTweetPerspective> sourceStatus;
@property (nonatomic) long long headerButtonGroup;
@property (nonatomic, retain) T1AppNavigationContext *navigationContext;
@property (nonatomic, readonly) id <T1ProfileViewModel> viewModel;
@property (nonatomic, copy) TFSTwitterScribeContext *sourceScribeContext;

/* required instance methods */
- (_Bool)isProfileForUser:(id)user;
- (_Bool)isProfileForUser:(id)user;
- (_Bool)isProfileForUserReference:(id)reference;
- (_Bool)isProfileForUserReference:(id)reference;
- (_Bool)isProfileForUserDataSource:(id)source;
- (_Bool)isProfileForUserDataSource:(id)source;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)animated;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)animated;
- (void)showFollowersWithTab:(unsigned long long)tab;
- (void)showFollowersWithTab:(unsigned long long)tab;
- (void)showFollowConfirmation;
- (void)showHighlightsTab;
- (void)showExpandedBioModal;
- (void)showJobListModal;
- (void)showTweetsWithRepliesTab;
- (void)showProfileVideosTabWithPersist:(_Bool)persist;
- (void)showProfileVideosTabWithPersist:(_Bool)persist;
- (void)showSubscriptionsTab;
- (void)showProfileAboutPage;
- (void)showAffiliatesList;

@optional

@end

#endif /* T1ProfileViewController_Protocol_h */
