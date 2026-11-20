//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRHingePassthroughView_h
#define TCRHingePassthroughView_h
@import Foundation;

@class UIView;

@interface TCRHingePassthroughView : UIView

@property (weak, nonatomic) UIView *pane;
@property (weak, nonatomic) UIView *underlyingView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TCRHingePassthroughView_h */
