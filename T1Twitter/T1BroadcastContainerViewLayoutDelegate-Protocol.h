//
#ifndef T1BroadcastContainerViewLayoutDelegate_Protocol_h
#define T1BroadcastContainerViewLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcastContainerViewLayoutDelegate <NSObject>

@required

/* required instance methods */
- (id)layoutStateForModel:(id)model displayMode:(unsigned long long)mode playbackState:(id)state bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds systemSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (double)videoAspectRatioForVideoSize:(struct CGSize { double x0; double x1; })size rotation:(double)rotation;
- (_Bool)shouldLayoutPlayerViewForDisplayMode:(unsigned long long)mode;

@optional

@end

#endif /* T1BroadcastContainerViewLayoutDelegate_Protocol_h */
