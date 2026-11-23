//
#ifndef TAVNetworkUsageSnapshot_h
#define TAVNetworkUsageSnapshot_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, NSUUID;

@interface TAVNetworkUsageSnapshot : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *itemIdentifier;
@property (readonly, nonatomic) _Bool isFinal;
@property (readonly, copy, nonatomic) NSString *currentVariantURLString;
@property (readonly, nonatomic) long long transferredByteCount;
@property (readonly, nonatomic) long long wwanRequestCount;
@property (readonly, nonatomic) long long wifiRequestCount;
@property (readonly, nonatomic) double transferDurationInterval;

/* instance methods */
- (id)initWithItemIdentifer:(id)identifer isFinal:(_Bool)final currentVariantURLString:(id)urlstring transferredByteCount:(long long)count wwanRequestCount:(long long)count wifiRequestCount:(long long)count transferDurationInterval:(double)interval;
- (id)initWithItemIdentifer:(id)identifer isFinal:(_Bool)final performanceState:(id)state;
- (void)notifyObservers;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVNetworkUsageSnapshot_h */
