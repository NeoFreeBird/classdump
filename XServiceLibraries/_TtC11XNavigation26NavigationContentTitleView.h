//
#ifndef _TtC11XNavigation26NavigationContentTitleView_h
#define _TtC11XNavigation26NavigationContentTitleView_h
@import Foundation;

@class UIView, XNavigation.NavigationBarTitleView;

@interface XNavigation.NavigationContentTitleView : UIView { // (Swift)
    /* instance variables */
    XNavigation.NavigationBarTitleView titleView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation26NavigationContentTitleView_h */
