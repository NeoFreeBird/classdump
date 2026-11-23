//
#ifndef _TtC15TwitterSearchV28PillView_h
#define _TtC15TwitterSearchV28PillView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class TwitterSearchV2.PillView _$scSg ->, TwitterSearchV2.SearchQueryOperator, UIView, _$sSo7UILabelC;

@interface TwitterSearchV2.PillView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    TwitterSearchV2.SearchQueryOperator queryOperator;
    TwitterSearchV2.PillView _$scSg -> onRemove;
    TwitterSearchV2.PillView _$scSg -> onActivate;
    __C.UILabel textLabel;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (_Bool)accessibilityActivate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC15TwitterSearchV28PillView_h */
