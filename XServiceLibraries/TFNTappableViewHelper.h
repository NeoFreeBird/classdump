//
#ifndef TFNTappableViewHelper_h
#define TFNTappableViewHelper_h
@import Foundation;

#include "TFNLongPressGestureRecognizer.h"
#include "TFNTapGestureRecognizer.h"
#include "TFNTappableView-Protocol.h"
#include "TFNTouchDownGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString, UIHoverGestureRecognizer, UIView;

@interface TFNTappableViewHelper : NSObject <UIGestureRecognizerDelegate> {
    /* instance variables */
    UIView<TFNTappableView> *_view;
    id _doubleTapTarget;
    SEL _doubleTapAction;
    id _longPressTarget;
    SEL _longPressAction;
    id _pressedStateDidChangeTarget;
    SEL _pressedStateDidChangeAction;
    id _hoverTarget;
    SEL _hoverAction;
    _Bool _hasSetUserInteractionEnabled;
    _Bool _hasSetAccessibility;
    SEL _invokingViewSelector;
}

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) _Bool generatingGestureRecognizers;
@property (readonly, nonatomic) TFNTapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) TFNTapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;
@property (readonly, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTappableView:(id)view;
- (id)init;
- (void)dealloc;
- (void)setTapTarget:(id)target action:(SEL)action;
- (void)performTapAction;
- (void)setDoubleTapTarget:(id)target action:(SEL)action;
- (void)performDoubleTapAction;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (void)setHoverTarget:(id)target action:(SEL)action;
- (void)performLongPressAction;
- (void)setPressedStateDidChangeTarget:(id)target action:(SEL)action;
- (void)_updateUserInteractionEnabled;
- (void)_updateTouchDownGestureRecognizer;
- (void)_tfn_updateHoverGestureRecognizer;
- (void)_touchDownAction;
- (void)_tapAction;
- (void)_doubleTapAction;
- (void)_longPressAction;
- (void)_tfn_hoverAction;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)setUserInteractionEnabled:(_Bool)enabled;
- (void)setIsAccessibilityElement:(_Bool)element;
- (void)setAccessibilityTraits:(unsigned long long)traits;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)isGeneratingGestureRecognizers;

@end

#endif /* TFNTappableViewHelper_h */
