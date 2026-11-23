//
#ifndef TSFSuperFollowsStatusViewModel_Protocol_h
#define TSFSuperFollowsStatusViewModel_Protocol_h
@import Foundation;

@class NSString, TFSTwitterSuperFollowInfo;

@protocol TSFSuperFollowsStatusViewModel

@required

@property (nonatomic, readonly) _Bool isReply;
@property (nonatomic, readonly) NSString *authenticatedAccountUsername;
@property (nonatomic, readonly) _Bool isTweetedByAuthenticatedAccount;
@property (nonatomic, readonly) _Bool isTweetedByAuthenticatedSuperFollowCreatorAccount;
@property (nonatomic, readonly) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (nonatomic, readonly) _Bool isInlineBadgeEnabledForAuthenticatedAccount;
@property (nonatomic, readonly) _Bool isWithheldInCountry;
@property (nonatomic, readonly) _Bool isExclusiveTweet;
@property (nonatomic, readonly) _Bool isTweetAuthoredByExclusiveCreator;
@property (nonatomic, readonly) _Bool isAuthenticatedAccountExclusiveRootTweetAuthor;
@property (nonatomic, readonly) _Bool isRedesignEnabled;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) _Bool isPreviewRedesignEnabled;
@property (nonatomic, readonly) _Bool shouldShowPreviewBadge;

/* required instance methods */
- (_Bool)needsViewUpdateForUpdateInfo:(id)info;

@optional

@end

#endif /* TSFSuperFollowsStatusViewModel_Protocol_h */
