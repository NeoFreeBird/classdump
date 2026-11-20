//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVVideoQualityState_h
#define TAVVideoQualityState_h
@import Foundation;

#include "TAVVideoQualityEndpoint.h"

@class NSObject, NSSet, NSString;

@interface TAVVideoQualityState : NSObject

@property (readonly, nonatomic) TAVVideoQualityEndpoint *selectedQualityEndpoint;
@property (readonly, copy, nonatomic) NSSet *availableEndpoints;
@property (readonly, nonatomic) TAVVideoQualityEndpoint *cacheEndpoint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxResolution;
@property (readonly, nonatomic) NSString *mutationReason;

/* instance methods */
- (id)initWithSelectedQualityEndpoint:(id)endpoint availableEndpoints:(id)endpoints cacheEndpoint:(id)endpoint maxResolution:(struct CGSize { double x0; double x1; })resolution mutationReason:(id)reason;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVVideoQualityState_h */
