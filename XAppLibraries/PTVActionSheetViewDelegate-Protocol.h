//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
