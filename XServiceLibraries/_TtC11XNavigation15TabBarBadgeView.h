//
#ifndef _TtC11XNavigation15TabBarBadgeView_h
#define _TtC11XNavigation15TabBarBadgeView_h
@import Foundation;

@class UIView, XDesignSystem.ButtonBadgeView, XNavigation.TabBarController.TabBadge, _$sSo7UIColorC;

@interface XNavigation.TabBarBadgeView : UIView { // (Swift)
    /* instance variables */
    XNavigation.TabBarController.TabBadge badge;
    __C.UIColor color;
    XDesignSystem.ButtonBadgeView badgeView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation15TabBarBadgeView_h */
