//
#ifndef _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h
#define _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterViewCountInfo.h"

@protocol TFSTwitterCore.TFSTwitterStatusEngagement <NSObject>

@required

@property (nonatomic, readonly) long long favoriteCount;
@property (nonatomic, readonly) long long bookmarkCount;
@property (nonatomic, readonly) long long retweetCount;
@property (nonatomic, readonly) long long quoteCount;
@property (nonatomic, readonly) long long replyCount;
@property (nonatomic, readonly) _Bool favoritedByLoadingAccount;
@property (nonatomic, readonly) _Bool bookmarkedByLoadingAccount;
@property (nonatomic, readonly) _Bool seenAsRetweeted;
@property (nonatomic, readonly) _Bool seenAsFavorited;
@property (nonatomic, readonly) _Bool seenAsDownvoted;
@property (nonatomic, readonly) _Bool seenAsBookmarked;
@property (nonatomic, readonly) TFSTwitterViewCountInfo *viewCountInfo;

@optional

@end

#endif /* _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h */
