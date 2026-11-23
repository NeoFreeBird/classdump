//
#ifndef _TtC12XPhotoEditor25CanvasAlignmentGuidesView_h
#define _TtC12XPhotoEditor25CanvasAlignmentGuidesView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo6UIViewC, __C.CGRect;

@interface XPhotoEditor.CanvasAlignmentGuidesView : UIView { // (Swift)
    /* instance variables */
    __C.CGRect contentRect;
    Swift.Bool showsVerticalCenter;
    Swift.Bool showsHorizontalCenter;
    __C.UIView verticalLine;
    __C.UIView horizontalLine;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor25CanvasAlignmentGuidesView_h */
