//
#ifndef PTVActionSheetDelegate_Protocol_h
#define PTVActionSheetDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVActionSheetDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)dismissButtonPressedOnActionSheet:(id)sheet;
- (void)actionSheetWillDisappear:(id)disappear;
- (void)actionSheetViewDidDisappear;

@end

#endif /* PTVActionSheetDelegate_Protocol_h */
