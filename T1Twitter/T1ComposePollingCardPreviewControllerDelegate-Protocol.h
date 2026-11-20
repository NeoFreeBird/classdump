//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComposePollingCardPreviewControllerDelegate_Protocol_h
#define T1ComposePollingCardPreviewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ComposePollingCardPreviewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pollingCardPreviewController:(id)controller didShowPollComposeView:(id)view;
- (void)pollingCardPreviewControllerDidBeginEditing:(id)editing;
- (void)pollingCardPreviewControllerDidEndEditing:(id)editing;
- (void)pollingCardPreviewController:(id)controller didRemovePollComposeView:(id)view;
- (void)pollingCardPreviewController:(id)controller didAddChoiceToPollComposeView:(id)view;
- (void)pollingCardPreviewController:(id)controller willShowDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller willHideDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller didShowDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller didHideDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller didChangeCompositionPollingCard:(id)card;

@end

#endif /* T1ComposePollingCardPreviewControllerDelegate_Protocol_h */
