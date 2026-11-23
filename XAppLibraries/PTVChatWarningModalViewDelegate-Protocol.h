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
