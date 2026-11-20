//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTappableImageView_h
#define TFNTappableImageView_h
@import Foundation;

#include "TFNLongPressGestureRecognizer.h"
#include "TFNTapGestureRecognizer.h"
#include "TFNTappableView-Protocol.h"
#include "TFNTappableViewHelper.h"
#include "TFNTouchDownGestureRecognizer.h"

@class NSString, UIImageView;

@interface TFNTappableImageView : UIImageView <TFNTappableView> {
    /* instance variables */
    TFNTappableViewHelper *_helper;
}

@property (nonatomic) _Bool generatingGestureRecognizers;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (nonatomic) _Bool pressed;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (readonly, nonatomic) TFNTapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) TFNTapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setTapTarget:(id)target action:(SEL)action;
- (void)performTapAction;
- (void)setDoubleTapTarget:(id)target action:(SEL)action;
- (void)performDoubleTapAction;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (void)performLongPressAction;
- (void)setPressedStateDidChangeTarget:(id)target action:(SEL)action;
- (void)setUserInteractionEnabled:(_Bool)enabled;
- (void)setIsAccessibilityElement:(_Bool)element;
- (void)setAccessibilityTraits:(unsigned long long)traits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (_Bool)isGeneratingGestureRecognizers;
- (_Bool)isPressed;

@end

#endif /* TFNTappableImageView_h */
