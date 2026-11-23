//
#ifndef PTVBroadcastScrollView_h
#define PTVBroadcastScrollView_h
@import Foundation;

#include "PTVBroadcastScrollViewDelegate-Protocol.h"
#include "PTVScrollView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, UIView;

@interface PTVBroadcastScrollView : PTVScrollView <UIScrollViewDelegate> {
    /* instance variables */
    id /* block */ _animationCompletion;
    struct CGPoint { double x; double y; } _animationDestination;
}

@property (retain, nonatomic) UIView *pointInsideTouchProxy;
@property (retain, nonatomic) UIView *hitTestProxy;
@property (weak, nonatomic) id <PTVBroadcastScrollViewDelegate> broadcast_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)setInitialContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset withCompletionBlock:(id /* block */)block;

@end

#endif /* PTVBroadcastScrollView_h */
