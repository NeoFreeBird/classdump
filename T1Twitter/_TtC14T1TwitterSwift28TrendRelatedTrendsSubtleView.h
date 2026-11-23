//
#ifndef _TtC14T1TwitterSwift28TrendRelatedTrendsSubtleView_h
#define _TtC14T1TwitterSwift28TrendRelatedTrendsSubtleView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class T1TwitterSwift.TrendRelatedTrendsSubtleView.Style, T1TwitterSwift.TrendRelatedTrendsSubtleViewModel ?, T1TwitterSwift.TrendURTUrlNavigationHelper ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo21TFNAttributedTextViewC;

@interface T1TwitterSwift.TrendRelatedTrendsSubtleView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    __C.TFNAttributedTextView textView;
    T1TwitterSwift.TrendRelatedTrendsSubtleViewModel ? viewModel;
    T1TwitterSwift.TrendRelatedTrendsSubtleView.Style style;
    T1TwitterSwift.TrendURTUrlNavigationHelper ? navigationHelper;
    nominal type descriptor for CoreGraphics.CGFloat preferredMaxLayoutWidth;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift28TrendRelatedTrendsSubtleView_h */
