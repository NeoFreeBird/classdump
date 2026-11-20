//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetViewControllerLayoutDelegate_Protocol_h
#define TFNModalSheetViewControllerLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNModalSheetViewControllerLayoutDelegate <NSObject>

@required

/* required instance methods */
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@optional

@end

#endif /* TFNModalSheetViewControllerLayoutDelegate_Protocol_h */
