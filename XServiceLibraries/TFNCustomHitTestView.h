//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNCustomHitTestView_h
#define TFNCustomHitTestView_h
@import Foundation;

@class UIView;

@interface TFNCustomHitTestView : UIView

@property (copy, nonatomic) id /* block */ hitTestBlock;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TFNCustomHitTestView_h */
