//
#ifndef TFNMenuSheetViewControllerDelegate_Protocol_h
#define TFNMenuSheetViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSheetViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)menuSheetViewController:(id)controller willDismissFromGesture:(_Bool)gesture;

@end

#endif /* TFNMenuSheetViewControllerDelegate_Protocol_h */
