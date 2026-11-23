//
#ifndef _TtC7XSports25SportsPlayPostActionsView_h
#define _TtC7XSports25SportsPlayPostActionsView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.SportsPlayPostSession ?, _$sSSSg;

@interface XSports.SportsPlayPostActionsView : UIView { // (Swift)
    /* instance variables */
    XSports.SportsPlayPostSession ? session;
    Swift.String? installedRestID;
    Swift.Bool isOnScreen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC7XSports25SportsPlayPostActionsView_h */
