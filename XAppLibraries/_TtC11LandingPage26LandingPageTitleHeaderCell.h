//
#ifndef _TtC11LandingPage26LandingPageTitleHeaderCell_h
#define _TtC11LandingPage26LandingPageTitleHeaderCell_h
@import Foundation;

@class LandingPage.LandingPageTitleView, TFNTableViewCell, _$sSaySo18NSLayoutConstraintCG, _$sSo18NSLayoutConstraintCSg;

@interface LandingPage.LandingPageTitleHeaderCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    [__C.NSLayoutConstraint] customLayoutConstraints;
    __C.NSLayoutConstraint? heightConstraint;
    LandingPage.LandingPageTitleView titleView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;

@end

#endif /* _TtC11LandingPage26LandingPageTitleHeaderCell_h */
