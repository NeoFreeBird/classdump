//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections32ElectionsForecastCompositionView_h
#define _TtC10XElections32ElectionsForecastCompositionView_h
@import Foundation;

@class UIView, _$sSd, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XElections.ElectionsForecastCompositionView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel sourceLabel;
    __C.UILabel shareLabel;
    __C.UIView trackView;
    __C.UIView fillView;
    Swift.Double share;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC10XElections32ElectionsForecastCompositionView_h */
