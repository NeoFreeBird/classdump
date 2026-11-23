//
#ifndef PTVBroadcastEditViewModelObserver_Protocol_h
#define PTVBroadcastEditViewModelObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastEditViewModelObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastEditViewModelDidLoadThumbnails:(id)thumbnails;
- (void)broadcastEditViewModelDidFailToLoadThumbnails:(id)thumbnails;
- (void)broadcastEditViewModelDidCompleteEditBroadcast:(id)broadcast;

@end

#endif /* PTVBroadcastEditViewModelObserver_Protocol_h */
