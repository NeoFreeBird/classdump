//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24XLinkSheetTapOverlayView_h
#define _TtC14T1TwitterSwift24XLinkSheetTapOverlayView_h
@import Foundation;

@class UIView, _$sSa -> __C.CGRect _$sGSgycSg;

@interface T1TwitterSwift.XLinkSheetTapOverlayView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> __C.CGRect _$sGSgycSg tappableFramesProvider;
}

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift24XLinkSheetTapOverlayView_h */
