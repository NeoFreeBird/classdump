//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlaylistItem_h
#define TAVPlaylistItem_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVCaptionsConfiguration.h"
#include "TAVPlayerTechnologyBuilder-Protocol.h"
#include "TAVVideoContext.h"
#include "TVPVideoAdContext.h"

@class NSObject, NSString, NSUUID;

@interface TAVPlaylistItem : NSObject <NSCoding>

@property (readonly, nonatomic) _Bool isLiveContext;
@property (readonly, nonatomic) _Bool isAd;
@property (readonly, nonatomic) TVPVideoAdContext *tfn_adContext;
@property (retain, nonatomic) id <TAVPlayerTechnologyBuilder> techBuilder;
@property (retain, nonatomic) TAVVideoContext *context;
@property (nonatomic) _Bool prefersLooping;
@property (copy, nonatomic) NSUUID *playlistItemKey;
@property (copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; } bufferingConfiguration;
@property (retain, nonatomic) TAVCaptionsConfiguration *captionsConfiguration;
@property (nonatomic) unsigned long long maximumRetries;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialPlaybackTime;
@property (copy, nonatomic) NSString *errorHint;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationHint;

/* class methods */
+ (id)itemWithTechBuilder:(id)builder initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time context:(id)context analyticsMetadata:(id)metadata;
+ (id)itemWithTechBuilder:(id)builder analyticsMetadata:(id)metadata;

/* instance methods */
- (id)tfn_context;
- (id)initWithTechBuilder:(id)builder context:(id)context prefersLooping:(_Bool)looping initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time analyticsMetadata:(id)metadata bufferingConfiguration:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })configuration captionsConfiguration:(id)configuration maximumRetries:(unsigned long long)retries errorHint:(id)hint durationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })hint;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVPlaylistItem_h */
