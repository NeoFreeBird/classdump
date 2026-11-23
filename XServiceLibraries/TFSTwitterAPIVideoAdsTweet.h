//
#ifndef TFSTwitterAPIVideoAdsTweet_h
#define TFSTwitterAPIVideoAdsTweet_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterAPIVideoAdsTweet : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *tweetID;
@property (readonly, copy, nonatomic) NSString *impressionID;
@property (readonly, copy, nonatomic) NSString *liveEventID;
@property (readonly, nonatomic) NSNumber *tweetUserID;
@property (readonly, copy, nonatomic) NSString *displayLocation;

/* instance methods */
- (id)initWithTweetID:(id)id impressionID:(id)id liveEventID:(id)id displayLocation:(id)location;
- (id)initWithTweetID:(id)id impressionID:(id)id liveEventID:(id)id tweetUserID:(id)id displayLocation:(id)location;
- (id)init;
- (_Bool)isEqualToTweet:(id)tweet;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterAPIVideoAdsTweet_h */
