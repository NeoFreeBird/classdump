//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIActionSheetDelegate_Protocol_h
#define UIActionSheetDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIActionSheetDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(long long)index;
- (void)actionSheetCancel:(id)cancel;
- (void)willPresentActionSheet:(id)sheet;
- (void)didPresentActionSheet:(id)sheet;
- (void)actionSheet:(id)sheet willDismissWithButtonIndex:(long long)index;
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(long long)index;

@end

#endif /* UIActionSheetDelegate_Protocol_h */
