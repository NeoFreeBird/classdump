//
#ifndef _TtC10XElectionsP33_B410227976FCF4E31B617A109A9B401910WinnerView_h
#define _TtC10XElectionsP33_B410227976FCF4E31B617A109A9B401910WinnerView_h
@import Foundation;

@class UIView;

@interface XElections.(WinnerView in _B410227976FCF4E31B617A109A9B4019) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onTapProfile;
    @40@0:8:16@24@32 ringView;
    @40@0:8:16@24@32 avatarView;
    @40@0:8:16@24@32 $__lazy_storage_$_avatarLoader;
    @40@0:8:16@24@32 badgeView;
    @40@0:8:16@24@32 checkView;
    @40@0:8:16@24@32 nameLabel;
    @40@0:8:16@24@32 burstView;
    @40@0:8:16@24@32 partyColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)accessibilityActivate;
- (void)didTap;

@end

#endif /* _TtC10XElectionsP33_B410227976FCF4E31B617A109A9B401910WinnerView_h */
