//
#ifndef PTVVideoOverlayViewControllerChatDelegate_Protocol_h
#define PTVVideoOverlayViewControllerChatDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoOverlayViewControllerChatDelegate <NSObject>

@required

/* required instance methods */
- (void)sendChat:(id)chat keyboardLanguage:(id)language;

@optional

@end

#endif /* PTVVideoOverlayViewControllerChatDelegate_Protocol_h */
