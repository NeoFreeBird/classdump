//
#ifndef PTVPublishingView_h
#define PTVPublishingView_h
@import Foundation;

#include "PTVDisplayView-Protocol.h"

@class UILabel, UIView;

@interface PTVPublishingView : UIView {
    /* instance variables */
    UILabel *_debugLabel;
    long long _interfaceOrientation;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;
@property (retain) UIView<PTVDisplayView> *displayView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)debugLabel;
- (void)setNewOrientation:(long long)orientation;

@end

#endif /* PTVPublishingView_h */
