//
#ifndef T1BasicAppCardTargetImageSizeLayoutDelegate_Protocol_h
#define T1BasicAppCardTargetImageSizeLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BasicAppCardTargetImageSizeLayoutDelegate <NSObject>

@required

/* required instance methods */
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model layoutMetrics:(id)metrics;

@optional

@end

#endif /* T1BasicAppCardTargetImageSizeLayoutDelegate_Protocol_h */
