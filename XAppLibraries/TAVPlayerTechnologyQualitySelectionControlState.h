//
#ifndef TAVPlayerTechnologyQualitySelectionControlState_h
#define TAVPlayerTechnologyQualitySelectionControlState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVVideoQualityEndpoint.h"

@class NSObject, NSString;

@interface TAVPlayerTechnologyQualitySelectionControlState : NSObject <NSCopying>

@property (readonly, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint;
@property (readonly, nonatomic) _Bool staticEndpointsEnabled;
@property (readonly, nonatomic) NSString *mutationReason;

/* instance methods */
- (id)initVideoQualityEndpoint:(id)endpoint staticEndpointsEnabled:(_Bool)enabled mutationReason:(id)reason;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* TAVPlayerTechnologyQualitySelectionControlState_h */
