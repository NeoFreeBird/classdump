//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TFNBarButtonItem_h
#define UIView_TFNBarButtonItem_h
@import Foundation;

#include "TFNBarButtonItemButton.h"

@class UIBarButtonItem;

@interface UIView (TFNBarButtonItem)

/* instance methods */
- (_Bool)tfn_barButtonItemPointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)_tfn_barButtonItemHostBar;

@end

#endif /* UIView_TFNBarButtonItem_h */
