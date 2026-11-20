//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift22DashDrawerActionButton_h
#define _TtC14T1TwitterSwift22DashDrawerActionButton_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo22UITapGestureRecognizerC, _$sSo28UILongPressGestureRecognizerC, _$sSo7UIImageC, _$sSo8UIButtonC, _$syycSg;

@interface T1TwitterSwift.DashDrawerActionButton : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat buttonHeight;
    __C.UIImage image;
    __C.UIButton button;
    nominal type descriptor for CoreGraphics.CGFloat buttonInset;
    __C.UITapGestureRecognizer tapRecognizer;
    __C.UILongPressGestureRecognizer pressRecognizer;
    __C.UILongPressGestureRecognizer longPressRecognizer;
    (() -> ())? longPressHandler;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)wasTappedWithRecognizer:(id)recognizer;
- (void)wasTouchedWithRecognizer:(id)recognizer;
- (void)wasLongPressedWithRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift22DashDrawerActionButton_h */
