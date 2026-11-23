//
#ifndef PTVSwipeToDismissView_h
#define PTVSwipeToDismissView_h
@import Foundation;

#include "PTVScrollView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;
@protocol PTVSwipeToDismissViewDelegate;

@interface PTVSwipeToDismissView : UIView <UIScrollViewDelegate> {
    /* instance variables */
    _Bool _willDismiss;
    struct CGPoint { double x; double y; } _dismissOffset;
    _Bool _instructionsVisible;
    NSLayoutConstraint *_scrollViewPartialBackgroundTopConstraint;
}

@property (readonly, nonatomic) UIView *instructionsView;
@property (readonly, nonatomic) UIImageView *topFade;
@property (readonly, nonatomic) UIView *scrollViewPartialBackground;
@property (weak, nonatomic) id <PTVSwipeToDismissViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) PTVScrollView *scrollView;
@property (nonatomic) _Bool shouldAllowScrollViewToResetOnDismiss;
@property (readonly, nonatomic) UILabel *dismissLabel;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (_Bool)shouldCompleteSwipe;
- (_Bool)hasReachedDismissThreshold;
- (void)reset;
- (void)willBeginSwipe;
- (void)didUpdateSwipe;
- (void)didCancelSwipe;
- (void)didCompleteSwipe;
- (void)setInstructionsVisible:(_Bool)visible;
- (void)setInstructionsVisible:(_Bool)visible animated:(_Bool)animated;

@end

#endif /* PTVSwipeToDismissView_h */
