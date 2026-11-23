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
