//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatWarningModalViewDelegate_Protocol_h
#define PTVChatWarningModalViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatWarningModalViewDelegate <NSObject>

@required

/* required instance methods */
- (void)chatWarningViewDidPressSendMessage;
- (void)chatWarningViewDidPressDontSendMessage;

@optional

@end

#endif /* PTVChatWarningModalViewDelegate_Protocol_h */
