//
#ifndef TFSTwitterScribeTweetEngagementMetrics_h
#define TFSTwitterScribeTweetEngagementMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSObject;

@interface TFSTwitterScribeTweetEngagementMetrics : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *replyCount;
@property (readonly, nonatomic) NSNumber *retweetCount;
@property (readonly, nonatomic) NSNumber *quoteCount;
@property (readonly, nonatomic) NSNumber *favoriteCount;
@property (readonly, nonatomic) NSNumber *bookmarkcount;
@property (readonly, nonatomic) NSNumber *viewCount;
@property (readonly, nonatomic) NSDictionary *scribeDictionary;

/* instance methods */
- (id)initWithReplyCount:(id)count retweetCount:(id)count quoteCount:(id)count favoriteCount:(id)count bookmarkCount:(id)count viewCount:(id)count;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterScribeTweetEngagementMetrics_h */
