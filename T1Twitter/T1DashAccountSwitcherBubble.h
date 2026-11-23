//
#ifndef T1DashAccountSwitcherBubble_h
#define T1DashAccountSwitcherBubble_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TFNBadgeView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _TtC20TwitterNotifications21TFSTwitterBadgeCounts;

@interface T1DashAccountSwitcherBubble : UIView <UIGestureRecognizerDelegate> {
    /* instance variables */
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) TFNBadgeView *unreadBadgeView;
@property (retain, nonatomic) TwitterNotifications.TFSTwitterBadgeCounts *badgeCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)wasTapped:(id)tapped;
- (void)wasTouched:(id)touched;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;

@end

#endif /* T1DashAccountSwitcherBubble_h */
