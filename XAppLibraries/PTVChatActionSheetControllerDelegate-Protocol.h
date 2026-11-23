//
#ifndef PTVChatActionSheetControllerDelegate_Protocol_h
#define PTVChatActionSheetControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatActionSheetControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)chatActionSheetDidPressReplyTo:(id)to;
- (void)chatActionSheetDidPressViewProfile:(id)profile;
- (void)chatActionSheetDidPressBlockUserForMessage:(id)message;
- (void)chatActionSheetDidPressMuteForMessage:(id)message;
- (void)chatActionSheetDidPressUnmuteForMessage:(id)message;
- (void)chatActionSheetDidPressReportAbuse:(id)abuse;
- (void)chatActionSheetDidPressReportSpam:(id)spam;
- (void)chatActionSheetDidPressReportSexualContent:(id)content;
- (void)chatActionSheetDidPressReportOtherReason:(id)reason;

@optional

@end

#endif /* PTVChatActionSheetControllerDelegate_Protocol_h */
