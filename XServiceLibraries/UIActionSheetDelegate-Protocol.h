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
