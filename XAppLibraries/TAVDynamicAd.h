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
