//
#ifndef _TtC7XSports31AmericanFootballLastPlayBarView_h
#define _TtC7XSports31AmericanFootballLastPlayBarView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC7XSports21SportsLastPlayBarView.h"

@class Swift.Bool, XSports.AmericanFootballPlayFeedEntry ?, XSports.AmericanFootballPlayFeedEntry _$scSg ->, XSports.SportsPlayPostActionsView, XSports.SportsPlayPostSession _$sSgSS_So6UIViewCSo12UIScrollViewCSgtcSg;

@interface XSports.AmericanFootballLastPlayBarView : XSports.SportsLastPlayBarView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XSports.AmericanFootballPlayFeedEntry _$scSg -> onSelectEntry;
    XSports.SportsPlayPostSession _$sSgSS_So6UIViewCSo12UIScrollViewCSgtcSg installPlayPost;
    XSports.SportsPlayPostActionsView postActionsView;
    Swift.Bool isRevealed;
    Swift.Bool showsActions;
    XSports.AmericanFootballPlayFeedEntry ? entry;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)init;
- (void)didTap;

@end

#endif /* _TtC7XSports31AmericanFootballLastPlayBarView_h */
