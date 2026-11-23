//
#ifndef TAVScribeThriftLiveBroadcastDetails_h
#define TAVScribeThriftLiveBroadcastDetails_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVScribeThriftLiveBroadcastDetails : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *hostBroadcastId;
@property (copy, nonatomic) NSString *targetBroadcastId;
@property (nonatomic) long long broadcastState;

/* instance methods */
- (id)initWithHostBroadcastId:(id)id targetBroadcastId:(id)id broadcastState:(long long)state;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)marshallerDictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVScribeThriftLiveBroadcastDetails_h */
