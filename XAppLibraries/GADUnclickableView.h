//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADUnclickableView_h
#define GADUnclickableView_h
@import Foundation;

#include "GADView.h"

@interface GADUnclickableView : GADView

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* GADUnclickableView_h */
