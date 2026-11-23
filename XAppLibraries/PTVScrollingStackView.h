//
#ifndef PTVScrollingStackView_h
#define PTVScrollingStackView_h
@import Foundation;

#include "PTVBroadcastOverflowScrollContainerView.h"

@class UIStackView;

@interface PTVScrollingStackView : PTVBroadcastOverflowScrollContainerView

@property (retain, nonatomic) UIStackView *stackView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* PTVScrollingStackView_h */
