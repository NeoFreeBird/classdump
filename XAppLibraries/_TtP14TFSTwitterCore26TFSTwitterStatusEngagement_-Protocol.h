//
#ifndef _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h
#define _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFSTwitterViewCountInfo;

@protocol TFSTwitterCore.TFSTwitterStatusEngagement <NSObject>

@required

@property (readonly, nonatomic) long long favoriteCount;
@property (readonly, nonatomic) long long bookmarkCount;
@property (readonly, nonatomic) long long retweetCount;
@property (readonly, nonatomic) long long quoteCount;
@property (readonly, nonatomic) long long replyCount;
@property (readonly, nonatomic) _Bool favoritedByLoadingAccount;
@property (readonly, nonatomic) _Bool bookmarkedByLoadingAccount;
@property (readonly, nonatomic) _Bool seenAsRetweeted;
@property (readonly, nonatomic) _Bool seenAsFavorited;
@property (readonly, nonatomic) _Bool seenAsDownvoted;
@property (readonly, nonatomic) _Bool seenAsBookmarked;
@property (readonly, nonatomic) TFSTwitterViewCountInfo *viewCountInfo;

@optional

@end

#endif /* _TtP14TFSTwitterCore26TFSTwitterStatusEngagement__Protocol_h */
