//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastThumbnailManagerObserver_Protocol_h
#define PTVBroadcastThumbnailManagerObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastThumbnailManagerObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastThumbnailManagerDidLoadThumbnails:(id)thumbnails;
- (void)broadcastThumbnailManagerDidFailToLoadThumbnails:(id)thumbnails;
- (void)broadcastThumbnailManagerDidFailToLoadThumbnails:(id)thumbnails;

@end

#endif /* PTVBroadcastThumbnailManagerObserver_Protocol_h */
