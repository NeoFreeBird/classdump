//
#ifndef TFSTwitterUserCommunityRelationshipRole_h
#define TFSTwitterUserCommunityRelationshipRole_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterUserCommunityRelationshipRole : NSObject <NSSecureCoding> // (Swift)

@property (nonatomic, readonly) long long role;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterUserCommunityRelationshipRole_h */
