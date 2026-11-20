//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationItem_h
#define TAVFoundationItem_h
@import Foundation;

#include "AVAssetResourceLoaderDelegate-Protocol.h"
#include "TAVVideoQualityEndpoint.h"

@class AVPlayerItem, NSArray, NSObject;

@interface TAVFoundationItem : NSObject

@property (readonly, nonatomic) AVPlayerItem *avPlayerItem;
@property (readonly, nonatomic) id <AVAssetResourceLoaderDelegate> resourceLoader;
@property (readonly, copy, nonatomic) NSArray *accessLogEvents;
@property (nonatomic) _Bool hasAnyAudio;
@property (readonly, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint;

/* instance methods */
- (id)initWithAVPlayerItem:(id)item resourceLoader:(id)loader videoQualityEndpoint:(id)endpoint;
- (id)initWithAVPlayerItem:(id)item;
- (id)init;
- (void)dealloc;
- (id)description;

@end

#endif /* TAVFoundationItem_h */
