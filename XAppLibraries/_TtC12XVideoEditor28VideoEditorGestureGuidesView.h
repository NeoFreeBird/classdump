//
#ifndef _TtC12XVideoEditor28VideoEditorGestureGuidesView_h
#define _TtC12XVideoEditor28VideoEditorGestureGuidesView_h
@import Foundation;

@class UIView, XVideoEditor.VideoCaptionsGestureLayout, XVideoEditor.VideoEditorGuideDashedLineView, _$sSh -> XVideoEditor.VideoCaptionsGestureGuide, _$sSo6UIViewC, __C.CGImagePropertyOrientation, __C.CGRect _$sycSg, __C.UIEdgeInsets _$sycSg;

@interface XVideoEditor.VideoEditorGestureGuidesView : UIView { // (Swift)
    /* instance variables */
    __C.CGRect _$sycSg outputFrameProvider;
    __C.UIEdgeInsets _$sycSg edgeGuidesInsetsProvider;
    Swift.Set -> XVideoEditor.VideoCaptionsGestureGuide activeGuides;
    XVideoEditor.VideoCaptionsGestureLayout gestureLayout;
    __C.CGImagePropertyOrientation videoOrientation;
    __C.UIView _centralXLine;
    __C.UIView _centralYLine;
    __C.UIView _edgeTopLine;
    __C.UIView _edgeBottomLine;
    __C.UIView _edgeLeftLine;
    __C.UIView _edgeRightLine;
    XVideoEditor.VideoEditorGuideDashedLineView _rotationVerticalLine;
    XVideoEditor.VideoEditorGuideDashedLineView _rotationHorizontalLine;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XVideoEditor28VideoEditorGestureGuidesView_h */
