//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29T1SuperFollowsStatusViewModel_h
#define _TtC14T1TwitterSwift29T1SuperFollowsStatusViewModel_h
@import Foundation;

#include "TSFSuperFollowsStatusViewModel-Protocol.h"

@class NSObject, NSString, TFSTwitterSuperFollowInfo, _$sSo020T1StatusViewCombinedC5ModelC;

@interface T1TwitterSwift.T1SuperFollowsStatusViewModel : NSObject <TSFSuperFollowsStatusViewModel> { // (Swift)
    /* instance variables */
    __C.T1StatusViewCombinedViewModel combinedStatusViewModel;
}

@property (nonatomic, readonly) _Bool isReply;
@property (nonatomic, readonly) _Bool isTweetedByAuthenticatedAccount;
@property (nonatomic, readonly) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (nonatomic, readonly) _Bool isInlineBadgeEnabledForAuthenticatedAccount;
@property (nonatomic, readonly) _Bool isWithheldInCountry;
@property (nonatomic, readonly) _Bool isExclusiveTweet;
@property (nonatomic, readonly) _Bool isTweetAuthoredByExclusiveCreator;
@property (nonatomic, readonly) _Bool isRedesignEnabled;
@property (nonatomic, readonly) _Bool isAuthenticatedAccountExclusiveRootTweetAuthor;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *authenticatedAccountUsername;
@property (nonatomic, readonly) _Bool isTweetedByAuthenticatedSuperFollowCreatorAccount;
@property (nonatomic, readonly) _Bool isPreviewRedesignEnabled;
@property (nonatomic, readonly) _Bool shouldShowPreviewBadge;

/* instance methods */
- (id)initWithCombinedStatusViewModel:(id)model;
- (_Bool)needsViewUpdateForUpdateInfo:(id)info;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29T1SuperFollowsStatusViewModel_h */
