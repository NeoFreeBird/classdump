//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastEditTitleViewDelegate_Protocol_h
#define PTVBroadcastEditTitleViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastEditTitleViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastEditTitleViewDidBeginEditingTitle:(id)title;
- (void)broadcastEditTitleViewDidEditTitle:(id)title;
- (void)broadcastEditTitleViewDidEndEditingTitle:(id)title;

@end

#endif /* PTVBroadcastEditTitleViewDelegate_Protocol_h */
