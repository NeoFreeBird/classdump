//
#ifndef TAVAnalyticsPresentationScribeParameters_h
#define TAVAnalyticsPresentationScribeParameters_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TAVScribeImmersiveDetails.h"
#include "TAVScribeThriftLiveBroadcastDetails.h"
#include "TAVScribeThriftLiveVideoEventDetails.h"

@class NSDictionary, NSObject;

@interface TAVAnalyticsPresentationScribeParameters : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) TAVScribeThriftLiveBroadcastDetails *liveBroadcastDetails;
@property (readonly, copy, nonatomic) TAVScribeThriftLiveVideoEventDetails *liveVideoEventDetails;
@property (readonly, copy, nonatomic) TAVScribeImmersiveDetails *immersiveDetails;
@property (readonly, copy, nonatomic) NSDictionary *scribeAssociations;

/* instance methods */
- (id)init;
- (id)initWithLiveBroadcastDetails:(id)details liveVideoEventDetails:(id)details;
- (id)initWithLiveBroadcastDetails:(id)details liveVideoEventDetails:(id)details immersiveDetails:(id)details scribeAssociations:(id)associations;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsPresentationScribeParameters_h */
