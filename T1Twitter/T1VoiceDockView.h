//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceDockView_h
#define T1VoiceDockView_h
@import Foundation;

#include "TUIVoiceDockContainer-Protocol.h"
#include "TUIVoiceDockableContent-Protocol.h"

@class NSArray, NSLayoutConstraint, TFNSolidColorView, UIView;

@interface T1VoiceDockView : UIView <TUIVoiceDockContainer>

@property (retain, nonatomic) TFNSolidColorView *contentContainer;
@property (retain, nonatomic) TFNSolidColorView *transitionContainer;
@property (retain, nonatomic) NSArray *animationConstraints;
@property (retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint;
@property (retain, nonatomic) UIView *bottomDivider;
@property (nonatomic) unsigned long long displayState;
@property (retain, nonatomic) UIView<TUIVoiceDockableContent> *contentView;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (void)voiceDockContentDidInvalidateSize:(id)size;
- (void)transitionForwardToContentView:(id)view;
- (void)transitionBackwardToContentView:(id)view;
- (void)invalidateIntrinsicContentSize;
- (void)_t1_fittingSizeDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_t1_intrinsicHeightForDisplayState:(unsigned long long)state;
- (double)_t1_minimumHeight;
- (void)animateDocking:(id /* block */)docking;
- (void)animateDismissal:(id /* block */)dismissal;
- (void)_t1_replaceAnimatingConstraintsWithConstraints:(id)constraints;
- (void)_t1_initAccessibility;

@end

#endif /* T1VoiceDockView_h */
