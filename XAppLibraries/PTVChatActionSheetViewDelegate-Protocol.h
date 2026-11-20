//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
