//
#ifndef TAVVideoQualityEndpoint_h
#define TAVVideoQualityEndpoint_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVVideoQuality.h"

@class NSObject;

@interface TAVVideoQualityEndpoint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) TAVVideoQuality *videoQuality;
@property (readonly, nonatomic) long long enumValue;
@property (readonly, nonatomic) _Bool isStatic;

/* instance methods */
- (id)initAutoWithQuality;
- (id)initCacheWithQuality:(id)quality;
- (id)initStaticQuality:(id)quality;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVVideoQualityEndpoint_h */
