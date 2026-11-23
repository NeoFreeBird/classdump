//
#ifndef PTVBroadcastOverflowScrollStackContainerView_h
#define PTVBroadcastOverflowScrollStackContainerView_h
@import Foundation;

#include "PTVBroadcastOverflowScrollContainerView.h"
#include "PTVBroadcastOverflowScrollStackContainerViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIStackView, UIView;

@interface PTVBroadcastOverflowScrollStackContainerView : PTVBroadcastOverflowScrollContainerView <UIScrollViewDelegate> {
    /* instance variables */
    NSLayoutConstraint *_emptySpaceContainerHeightConstraint;
    NSLayoutConstraint *_emptySpaceContentCenterYConstraint;
    NSLayoutConstraint *_contentStackViewHeightConstraint;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIView *emptySpaceContainerView;
@property (readonly, nonatomic) NSLayoutConstraint *emptySpaceContainerMinimumHeightConstraint;
@property (retain, nonatomic) UIView *emptySpaceContentView;
@property (retain, nonatomic) id <PTVBroadcastOverflowScrollStackContainerViewDelegate> scrollDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)safeAreaInsetsDidChange;
- (void)updateEmptySpaceContentViewAlpha;
- (double)emptySpaceCompression;
- (void)didTapEmptySpace;

@end

#endif /* PTVBroadcastOverflowScrollStackContainerView_h */
