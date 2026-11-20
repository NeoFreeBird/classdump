//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI18PlayPauseMorphView_h
#define _TtC6ChatUI18PlayPauseMorphView_h
@import Foundation;

@class ChatUI.PlayPauseMorphView.Mode ?, UIView, _$sSo12CAShapeLayerC, _$sSo7UIColorC;

@interface ChatUI.PlayPauseMorphView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor glyphColor;
    __C.CAShapeLayer leftLayer;
    __C.CAShapeLayer rightLayer;
    ChatUI.PlayPauseMorphView.Mode ? mode;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC6ChatUI18PlayPauseMorphView_h */
