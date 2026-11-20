//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVMutablePlaylistItem_h
#define TAVMutablePlaylistItem_h
@import Foundation;

#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVPlayerTechnologyBuilder-Protocol.h"
#include "TAVPlaylistItem.h"
#include "TAVVideoContext.h"

@class NSString, NSUUID;

@interface TAVMutablePlaylistItem : TAVPlaylistItem

@property (retain, nonatomic) id <TAVPlayerTechnologyBuilder> techBuilder;
@property (retain, nonatomic) TAVVideoContext *context;
@property (nonatomic) _Bool prefersLooping;
@property (copy, nonatomic) NSUUID *playlistItemKey;
@property (copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; } bufferingConfiguration;
@property (nonatomic) unsigned long long maximumRetries;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialPlaybackTime;
@property (copy, nonatomic) NSString *errorHint;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVMutablePlaylistItem_h */
