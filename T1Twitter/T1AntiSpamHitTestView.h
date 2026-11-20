//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AntiSpamHitTestView_h
#define T1AntiSpamHitTestView_h
@import Foundation;

#include "T1AntiSpamHitTestViewDelegate-Protocol.h"

@class UIView;

@interface T1AntiSpamHitTestView : UIView

@property (weak, nonatomic) id <T1AntiSpamHitTestViewDelegate> delegate;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* T1AntiSpamHitTestView_h */
