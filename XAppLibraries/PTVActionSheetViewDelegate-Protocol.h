//
#ifndef PTVActionSheetViewDelegate_Protocol_h
#define PTVActionSheetViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVActionSheetViewDelegate <NSObject>

@required

/* required instance methods */
- (void)dismissButtonPressedOnActionSheetView:(id)view;
- (void)actionSheetView:(id)view didPressButtonAtIndex:(unsigned long long)index;

@optional

@end

#endif /* PTVActionSheetViewDelegate_Protocol_h */
