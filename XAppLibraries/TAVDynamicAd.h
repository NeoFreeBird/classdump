//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVDynamicAd_h
#define TAVDynamicAd_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVAnalyticsVideoAdServerMetadata.h"
#include "TAVPlaylistItem.h"

@class NSObject;

@interface TAVDynamicAd : NSObject <NSCopying>

@property (readonly, nonatomic) TAVAnalyticsVideoAdServerMetadata *adServerMetadata;
@property (readonly, nonatomic) TAVPlaylistItem *playlistItem;

/* instance methods */
- (id)init;
- (id)initWithAdServerMetadata:(id)metadata playlistItem:(id)item;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVDynamicAd_h */
