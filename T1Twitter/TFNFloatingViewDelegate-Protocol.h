//
#ifndef TFNFloatingViewDelegate_Protocol_h
#define TFNFloatingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNFloatingViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)didTapFloatingView:(id)view;
- (void)didLongPressFloatingView:(id)view;
- (void)didSwipeFloatingView:(id)view;
- (void)floatingView:(id)view didPickupOnArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })area;
- (void)floatingView:(id)view didMoveOnArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })area;
- (void)floatingView:(id)view didReleaseOnArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })area;

@end

#endif /* TFNFloatingViewDelegate_Protocol_h */
