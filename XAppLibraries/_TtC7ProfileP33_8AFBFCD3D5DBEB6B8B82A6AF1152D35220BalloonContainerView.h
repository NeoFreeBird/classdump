//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7ProfileP33_8AFBFCD3D5DBEB6B8B82A6AF1152D35220BalloonContainerView_h
#define _TtC7ProfileP33_8AFBFCD3D5DBEB6B8B82A6AF1152D35220BalloonContainerView_h
@import Foundation;

@class UIView;

@interface Profile.(BalloonContainerView in _8AFBFCD3D5DBEB6B8B82A6AF1152D352) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scoreView;
    @40@0:8:16@24@32 onSizeChange;
    @40@0:8:16@24@32 lastSize;
}

/* instance methods */
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7ProfileP33_8AFBFCD3D5DBEB6B8B82A6AF1152D35220BalloonContainerView_h */
