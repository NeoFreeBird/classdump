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
