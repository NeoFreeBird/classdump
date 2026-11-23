//
#ifndef GDTCORClock_h
#define GDTCORClock_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface GDTCORClock : NSObject <NSSecureCoding>

@property (readonly, nonatomic) long long timeMillis;
@property (readonly, nonatomic) long long timezoneOffsetSeconds;
@property (readonly, nonatomic) long long kernelBootTimeNanoseconds;
@property (readonly, nonatomic) long long uptimeNanoseconds;
@property (readonly, nonatomic) long long kernelBootTime;
@property (readonly, nonatomic) long long uptime;

/* class methods */
+ (id)snapshot;
+ (id)clockSnapshotInTheFuture:(unsigned long long)future;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (_Bool)isAfter:(id)after;
- (long long)uptimeMilliseconds;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GDTCORClock_h */
