//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6CallUI18CallTileBorderView_h
#define _TtC6CallUI18CallTileBorderView_h
@import Foundation;

@class CallUI.CallTileBorder, UIView, _$sSo6UIViewC;

@interface CallUI.CallTileBorderView : UIView { // (Swift)
    /* instance variables */
    __C.UIView sharingBorderView;
    __C.UIView speakingBorderView;
    CallUI.CallTileBorder border;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6CallUI18CallTileBorderView_h */
