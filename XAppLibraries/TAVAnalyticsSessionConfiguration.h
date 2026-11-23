//
#ifndef TAVAnalyticsSessionConfiguration_h
#define TAVAnalyticsSessionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVAnalyticsScribeClientEventParametersBuilder-Protocol.h"
#include "TAVScribeContext.h"
#include "TVDIAnalyticsConfiguration.h"

@class NSArray, NSObject;

@interface TAVAnalyticsSessionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) TAVScribeContext *initialScribeContext;
@property (readonly, copy, nonatomic) NSArray *sinks;
@property (readonly, copy, nonatomic) NSArray *trackers;
@property (readonly, nonatomic) id <TAVAnalyticsScribeClientEventParametersBuilder> clientEventParametersBuilder;
@property (readonly, nonatomic) TVDIAnalyticsConfiguration *configuration;

/* instance methods */
- (id)initWithFeatures:(id)features playlistMetadata:(id)metadata initialScribeContext:(id)context;
- (id)initWithFeatures:(id)features playlistMetadata:(id)metadata initialScribeContext:(id)context broadcastState:(unsigned long long)state;
- (id)initWithInitialScribeContext:(id)context sinks:(id)sinks trackers:(id)trackers clientEventParametersBuilder:(id)builder configuration:(id)configuration;
- (id)copyWithAddedSinks:(id)sinks;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TAVAnalyticsSessionConfiguration_h */
