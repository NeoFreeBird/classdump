//
#ifndef PTVChatOverlayView_h
#define PTVChatOverlayView_h
@import Foundation;

#include "PTVChatOverlayViewDelegate-Protocol.h"
#include "PTVContainerView.h"
#include "PTVScrollChatToBottomPillView.h"

@class NSLayoutConstraint;

@interface PTVChatOverlayView : PTVContainerView

@property (readonly, nonatomic) PTVScrollChatToBottomPillView *scrollChatToBottomButton;
@property (nonatomic) _Bool scrollChatToBottomButtonIsVisible;
@property (retain, nonatomic) NSLayoutConstraint *scrollChatToBottomButtonBottomConstraint;
@property (weak, nonatomic) id <PTVChatOverlayViewDelegate> delegate;

/* class methods */
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ChatOverlayPadding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithDelegate:(id)delegate;
- (void)updateConstraints;
- (void)setScrollChatToBottomButtonIsVisible:(_Bool)visible animated:(_Bool)animated;
- (void)setNumberOfUnreadMessages:(unsigned long long)messages;
- (void)didTapScrollChatToBottomButton:(id)button;

@end

#endif /* PTVChatOverlayView_h */
