//
#ifndef PTVBroadcastEditViewDelegate_Protocol_h
#define PTVBroadcastEditViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastEditViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastEditViewDidUpdateThumbnail:(id)thumbnail;
- (void)broadcastEditViewDidUpdateStartPoint:(id)point;
- (void)broadcastEditViewDidUpdateTitle:(id)title;

@end

#endif /* PTVBroadcastEditViewDelegate_Protocol_h */
