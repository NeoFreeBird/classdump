//
#ifndef TAVAnalyticsVideoAdServerMetadata_h
#define TAVAnalyticsVideoAdServerMetadata_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TAVAnalyticsVideoAdServerMetadata : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSNumber *dynamicAdType;
@property (readonly, copy, nonatomic) NSString *videoAnalyticsScribePassthrough;

/* instance methods */
- (id)init;
- (id)initWithDynamicAdType:(id)type videoAnalyticsScribePassthrough:(id)passthrough;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsVideoAdServerMetadata_h */
