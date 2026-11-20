//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
