//
#ifndef TFNTappableView_Protocol_h
#define TFNTappableView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNLongPressGestureRecognizer, TFNTapGestureRecognizer, TFNTouchDownGestureRecognizer;

@protocol TFNTappableView <NSObject>

@required

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (nonatomic) _Bool pressed;
@property (nonatomic) _Bool pressed;
@property (nonatomic, copy) id /* block */ tapActionBlock;
@property (nonatomic, readonly) TFNTapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) TFNTapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic, readonly) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;

/* required instance methods */
- (_Bool)isPressed;
- (_Bool)isPressed;
- (void)setTapTarget:(id)target action:(SEL)action;
- (void)performTapAction;
- (void)setDoubleTapTarget:(id)target action:(SEL)action;
- (void)performDoubleTapAction;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (void)performLongPressAction;
- (void)setPressedStateDidChangeTarget:(id)target action:(SEL)action;

@optional

@end

#endif /* TFNTappableView_Protocol_h */
