//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveVideoBadgeViewLayoutDelegate_Protocol_h
#define T1LiveVideoBadgeViewLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveVideoBadgeViewLayoutDelegate <NSObject>

@required

/* required instance methods */
- (id)layoutStateForModel:(id)model theme:(id)theme bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds layoutMetrics:(id)metrics;
- (id)layoutStateForModel:(id)model theme:(id)theme bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds layoutMetrics:(id)metrics;

@optional

@end

#endif /* T1LiveVideoBadgeViewLayoutDelegate_Protocol_h */
