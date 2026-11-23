//
#ifndef TFNSwipeActionDelegate_Protocol_h
#define TFNSwipeActionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol TFNSwipeActionDelegate <NSObject>

@required

@property (retain, nonatomic) UIView *actionView;

/* required instance methods */
- (void)updateViewWithAnimationPercent:(double)percent;
- (void)onAction;

@optional

@end

#endif /* TFNSwipeActionDelegate_Protocol_h */
