//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsBroadcastMetadata_h
#define TAVAnalyticsBroadcastMetadata_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsBroadcastMetadata : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *broadcastID;
@property (readonly, nonatomic) unsigned long long broadcastState;
@property (readonly, nonatomic) _Bool availableForReplay;

/* instance methods */
- (id)init;
- (id)initWithBroadcastID:(id)id broadcastState:(unsigned long long)state availableForReplay:(_Bool)replay;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isAvailableForReplay;

@end

#endif /* TAVAnalyticsBroadcastMetadata_h */
