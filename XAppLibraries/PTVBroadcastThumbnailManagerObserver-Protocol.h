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
