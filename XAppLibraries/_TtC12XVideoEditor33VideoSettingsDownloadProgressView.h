//
#ifndef _TtC12XVideoEditor33VideoSettingsDownloadProgressView_h
#define _TtC12XVideoEditor33VideoSettingsDownloadProgressView_h
@import Foundation;

@class TFNTappableHighlightView, XVideoEditor.VideoSettingsDownloadProgressView.Style, _$sSd, _$sSo12CAShapeLayerC, _$sSo7UIColorC;

@interface XVideoEditor.VideoSettingsDownloadProgressView : TFNTappableHighlightView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer stopLayer;
    __C.CAShapeLayer trackLayer;
    __C.CAShapeLayer progressLayer;
    Swift.Double appliedProgress;
    Swift.Double progress;
    __C.UIColor progressColor;
    XVideoEditor.VideoSettingsDownloadProgressView.Style style;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XVideoEditor33VideoSettingsDownloadProgressView_h */
