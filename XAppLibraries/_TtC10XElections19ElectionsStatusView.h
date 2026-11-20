//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections19ElectionsStatusView_h
#define _TtC10XElections19ElectionsStatusView_h
@import Foundation;

@class Swift.Bool, UIView, XElections.ElectionsStatusView.Pulse, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XElections.ElectionsStatusView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool centersContent;
    __C.UIView dotView;
    __C.UILabel label;
    XElections.ElectionsStatusView.Pulse pulse;
}

@property (nonatomic) _Bool hidden;

/* instance methods */
- (_Bool)isHidden;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)refreshPulse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XElections19ElectionsStatusView_h */
