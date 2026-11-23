//
#ifndef TFSTwitterPreviousCounts_h
#define TFSTwitterPreviousCounts_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterPreviousCounts : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) long long favoriteCount;
@property (nonatomic, readonly) long long replyCount;
@property (nonatomic, readonly) long long retweetCount;
@property (nonatomic, readonly) long long quoteCount;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithFavoriteCount:(long long)count replyCount:(long long)count retweetCount:(long long)count quoteCount:(long long)count;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterPreviousCounts_h */
