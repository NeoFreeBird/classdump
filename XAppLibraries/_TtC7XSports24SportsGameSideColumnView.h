//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsGameSideColumnView_h
#define _TtC7XSports24SportsGameSideColumnView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsGameSegmentAccessory ?, XSports.SportsSegmentBarView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem16SheetSurfaceViewCMn, _$sSo6UIViewCSg;

@interface XSports.SportsGameSideColumnView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.SportsSegmentBarView segmentBarView;
    nominal type descriptor for CoreGraphics.CGFloat topInset;
    nominal type descriptor for XDesignSystem.SheetSurfaceView surfaceView;
    __C.UIView? contentView;
    XSports.SportsGameSegmentAccessory ? accessory;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24SportsGameSideColumnView_h */
