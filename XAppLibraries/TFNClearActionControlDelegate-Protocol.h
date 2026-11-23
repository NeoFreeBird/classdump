//
#ifndef TFNClearActionControlDelegate_Protocol_h
#define TFNClearActionControlDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNClearActionControlDelegate <NSObject>

@required

/* required instance methods */
- (void)clearActionControlWantsClear:(id)clear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForTouchMask;

@optional

@end

#endif /* TFNClearActionControlDelegate_Protocol_h */
