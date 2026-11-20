//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ShareSheet21ShareTrayFacepileView_h
#define _TtC10ShareSheet21ShareTrayFacepileView_h
@import Foundation;

@class ShareSheet.OverflowPillView ?, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSDySSSo6UIViewCG, _$sSa -> ShareSheet.ShareTrayFacepileView.Face;

@interface ShareSheet.ShareTrayFacepileView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool animatesNewFaces;
    nominal type descriptor for CoreGraphics.CGFloat avatarDiameter;
    Swift.Array -> ShareSheet.ShareTrayFacepileView.Face faces;
    [Swift.String : __C.UIView] avatarViews;
    ShareSheet.OverflowPillView ? overflowPillView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10ShareSheet21ShareTrayFacepileView_h */
