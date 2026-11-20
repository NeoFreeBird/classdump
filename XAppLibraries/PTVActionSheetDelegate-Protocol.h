//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
