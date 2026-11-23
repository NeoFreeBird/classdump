//
#ifndef PTVCompositeNavigationBarView_h
#define PTVCompositeNavigationBarView_h
@import Foundation;

#include "PTVNavigationBar.h"

@class UIImageView, UIView;

@interface PTVCompositeNavigationBarView : UIView {
    /* instance variables */
    UIImageView *_bottomShadow;
}

@property (readonly, nonatomic) PTVNavigationBar *navigationBar;
@property (readonly, nonatomic) UIView *mainView;
@property (nonatomic) _Bool hideShadow;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame navigationBar:(id)bar mainView:(id)view;

@end

#endif /* PTVCompositeNavigationBarView_h */
