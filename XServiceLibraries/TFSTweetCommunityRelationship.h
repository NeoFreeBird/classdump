//
#ifndef TFSTweetCommunityRelationship_h
#define TFSTweetCommunityRelationship_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TFSTweetCommunityRelationship : NSObject <NSSecureCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 tweetCommunityRelationship;
}

@property (nonatomic, readonly) _Bool canPin;
@property (nonatomic, readonly) _Bool canUnpin;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTweetCommunityRelationship_h */
