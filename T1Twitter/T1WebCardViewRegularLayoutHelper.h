//
#ifndef T1WebCardViewRegularLayoutHelper_h
#define T1WebCardViewRegularLayoutHelper_h
@import Foundation;

#include "T1WebCardViewLayoutHelper.h"

@interface T1WebCardViewRegularLayoutHelper : T1WebCardViewLayoutHelper

/* instance methods */
- (id)layoutForCardViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })_layoutInfoText:(id)text viewModel:(id)model width:(double)width atPoint:(struct CGPoint { double x0; double x1; })point contentWidth:(double)width;

@end

#endif /* T1WebCardViewRegularLayoutHelper_h */
