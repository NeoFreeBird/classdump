//
#ifndef PTVChatShareBroadcastTableViewCellDelegate_Protocol_h
#define PTVChatShareBroadcastTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatShareBroadcastTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)didSelectShareBroadcastButtonFromBroadcasterAction:(_Bool)action;
- (void)didSelectShareFromScreenshotPrompt:(id)prompt;

@optional

@end

#endif /* PTVChatShareBroadcastTableViewCellDelegate_Protocol_h */
