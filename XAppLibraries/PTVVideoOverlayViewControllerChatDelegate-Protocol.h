//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
