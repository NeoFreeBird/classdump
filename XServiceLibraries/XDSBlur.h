//
#ifndef XDSBlur_h
#define XDSBlur_h
@import Foundation;

@class UIView;

@interface XDSBlur : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 configuration;
    B24@0:8@"NSString"16 isActive;
    B24@0:8@"NSString"16 shape;
    B24@0:8@"NSString"16 border;
    B24@0:8@"NSString"16 shadow;
    B24@0:8@"NSString"16 visualEffectView;
    B24@0:8@"NSString"16 effectSeed;
    B24@0:8@"NSString"16 filterChain;
    B24@0:8@"NSString"16 isCustomRenderInstalled;
    B24@0:8@"NSString"16 tintView;
    B24@0:8@"NSString"16 accessibilityCancellable;
    B24@0:8@"NSString"16 drawnShapeProxy;
    B24@0:8@"NSString"16 drawnShapeLink;
    B24@0:8@"NSString"16 drawnShapeObserver;
    B24@0:8@"NSString"16 hasPendingDrawnShape;
    B24@0:8@"NSString"16 $__lazy_storage_$_backdropSamplingGroupName;
    B24@0:8@"NSString"16 cachedBackdropView;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithSystemEffectStyle:(long long)style;
- (id)initWithSystemEffectStyle:(long long)style reduceTransparencyScrimColor:(id)color;
- (id)initWithUniformRadius:(double)radius tint:(id)tint;
- (id)initWithUniformRadius:(double)radius tint:(id)tint blursUnderInvertColors:(_Bool)colors;
- (void)setUniformRadius:(double)radius tint:(id)tint;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSBlur_h */
