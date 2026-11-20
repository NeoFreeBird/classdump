//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1WebCardViewCompactLayoutHelper_h
#define T1WebCardViewCompactLayoutHelper_h
@import Foundation;

#include "T1WebCardViewLayoutHelper.h"

@interface T1WebCardViewCompactLayoutHelper : T1WebCardViewLayoutHelper

/* instance methods */
- (id)layoutForCardViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })_layoutInfoText:(id)text viewModel:(id)model width:(double)width frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame contentWidth:(double)width;

@end

#endif /* T1WebCardViewCompactLayoutHelper_h */
