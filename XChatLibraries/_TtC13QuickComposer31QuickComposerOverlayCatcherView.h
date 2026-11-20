//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13QuickComposer31QuickComposerOverlayCatcherView_h
#define _TtC13QuickComposer31QuickComposerOverlayCatcherView_h
@import Foundation;

@class QuickComposer.QuickComposerOverlayTouches, UIView, _$sSo6UIViewCSgXw, _$syycSg;

@interface QuickComposer.QuickComposerOverlayCatcherView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    weak __C.UIView? overlayView;
    weak __C.UIView? composer;
    QuickComposer.QuickComposerOverlayTouches touches;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleTap;

@end

#endif /* _TtC13QuickComposer31QuickComposerOverlayCatcherView_h */
