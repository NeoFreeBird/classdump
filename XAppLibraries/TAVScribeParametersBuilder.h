//
#ifndef TAVScribeParametersBuilder_h
#define TAVScribeParametersBuilder_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVScribeImmersiveDetails.h"
#include "TAVScribeThriftAmplifyDetails.h"
#include "TAVScribeThriftLiveBroadcastDetails.h"
#include "TAVScribeThriftLiveVideoEventDetails.h"
#include "TAVScribeThriftMediaDetails.h"
#include "TAVScribeThriftVideoDetails.h"

@class NSDictionary, NSNumber, NSObject, NSString;

@interface TAVScribeParametersBuilder : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *baseScribeItem;
@property (copy, nonatomic) TAVScribeThriftAmplifyDetails *amplifyDetails;
@property (copy, nonatomic) TAVScribeThriftVideoDetails *videoDetails;
@property (copy, nonatomic) TAVScribeThriftMediaDetails *mediaDetails;
@property (copy, nonatomic) TAVScribeThriftLiveVideoEventDetails *liveVideoEventDetails;
@property (copy, nonatomic) TAVScribeThriftLiveBroadcastDetails *liveBroadcastDetails;
@property (copy, nonatomic) TAVScribeImmersiveDetails *immersiveDetails;
@property (copy, nonatomic) NSDictionary *scribeAssociations;
@property (copy, nonatomic) NSString *promotedID;
@property (copy, nonatomic) NSNumber *isEarned;
@property (copy, nonatomic) NSNumber *publisherID;
@property (copy, nonatomic) NSNumber *playbackSpeed;

/* class methods */
+ (id)builderWithPlaylistMetadata:(id)metadata event:(id)event;

/* instance methods */
- (void)updateWithPlaylistMetadata:(id)metadata;
- (void)updateWithPrerollVideoMetadata:(id)metadata;
- (void)updateWithPlaylistItemMetadata:(id)metadata;
- (void)updateWithPromotedMetadata:(id)metadata;
- (void)updateWithAdServerMetadata:(id)metadata;
- (void)updateWithAnalyticsSessionState:(id)state;
- (void)updateWithEvent:(id)event;
- (void)updateWithTargetBroadcastId:(id)id broadcastState:(long long)state;
- (id)initWithBaseScribeItem:(id)item publisherID:(id)id promotedID:(id)id isEarned:(id)earned amplifyDetails:(id)details videoDetails:(id)details mediaDetails:(id)details liveVideoEventDetails:(id)details liveBroadcastDetails:(id)details;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)clientEventParameters;
- (id)promotedEventParameters;

@end

#endif /* TAVScribeParametersBuilder_h */
