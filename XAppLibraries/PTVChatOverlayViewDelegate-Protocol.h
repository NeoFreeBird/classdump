//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatOverlayViewDelegate_Protocol_h
#define PTVChatOverlayViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatOverlayViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatOverlayViewDidSelectScrollChatToBottom:(id)bottom;

@end

#endif /* PTVChatOverlayViewDelegate_Protocol_h */
