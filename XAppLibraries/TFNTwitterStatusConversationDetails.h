//
#ifndef TFNTwitterStatusConversationDetails_h
#define TFNTwitterStatusConversationDetails_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject;

@interface TFNTwitterStatusConversationDetails : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSArray *topParticipants;
@property (nonatomic) long long replyCount;

/* instance methods */
- (id)initWithTopParticipants:(id)participants replyCount:(long long)count;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFNTwitterStatusConversationDetails_h */
