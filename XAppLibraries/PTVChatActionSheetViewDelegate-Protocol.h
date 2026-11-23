//
#ifndef PTVChatActionSheetViewDelegate_Protocol_h
#define PTVChatActionSheetViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatActionSheetViewDelegate <NSObject>

@required

/* required instance methods */
- (void)chatActionSheetDidPressReportAbuse;
- (void)chatActionSheetDidPressReportSpam;
- (void)chatActionSheetDidPressReportSexualContent;
- (void)chatActionSheetDidPressReportOtherReason;

@optional

@end

#endif /* PTVChatActionSheetViewDelegate_Protocol_h */
