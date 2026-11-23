//
#ifndef XDSGlass_h
#define XDSGlass_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView;

@interface XDSGlass : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 configuration;
    B24@0:8@"NSString"16 shape;
    B24@0:8@"NSString"16 border;
    B24@0:8@"NSString"16 shadow;
    B24@0:8@"NSString"16 isMaterialized;
    B24@0:8@"NSString"16 anchor;
    B24@0:8@"NSString"16 frost;
    B24@0:8@"NSString"16 overlayView;
    B24@0:8@"NSString"16 visualEffectView;
    B24@0:8@"NSString"16 snapshotTintView;
    B24@0:8@"NSString"16 isSceneInBackground;
    B24@0:8@"NSString"16 clippedHostView;
    B24@0:8@"NSString"16 brighteningView;
    B24@0:8@"NSString"16 deformationAnimator;
    B24@0:8@"NSString"16 material;
    B24@0:8@"NSString"16 frostPlate;
    B24@0:8@"NSString"16 outgoingMaterials;
    B24@0:8@"NSString"16 materialToken;
    B24@0:8@"NSString"16 appliedEffectKey;
    B24@0:8@"NSString"16 touch;
    B24@0:8@"NSString"16 deformation;
    B24@0:8@"NSString"16 deformationGesture;
    B24@0:8@"NSString"16 hostedView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initCapsuleWithClearTint:(id)tint scrimColor:(id)color interactive:(_Bool)interactive;
- (void)setClearTint:(id)tint scrimColor:(id)color;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)didMoveToWindow;
- (void)sceneDidEnterBackground:(id)background;
- (void)sceneWillEnterForeground:(id)foreground;
- (void)handleDeformation:(id)deformation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSGlass_h */
