//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTweetConversationDetails_h
#define TFSTweetConversationDetails_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSObject;

@interface TFSTweetConversationDetails : NSObject <NSSecureCoding> // (Swift)

@property (nonatomic, readonly) long long replyCount;
@property (nonatomic, readonly) NSArray *topParticipantsUserIDs;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTweetConversationDetails_h */
