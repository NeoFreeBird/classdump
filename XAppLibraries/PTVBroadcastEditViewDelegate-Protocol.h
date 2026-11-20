//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
