//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26FleetLineItemAccessoryView_h
#define _TtC14T1TwitterSwift26FleetLineItemAccessoryView_h
@import Foundation;

@class T1TwitterSwift.FleetLineItemAccessoryView.AccessorySize, T1TwitterSwift.FleetLineItemViewModel.AccessoryType, UIView, _$sSo11UIImageViewCSg, _$sSo15CAGradientLayerCSg, _$sSo7CALayerC, _$sSo7UILabelCSg;

@interface T1TwitterSwift.FleetLineItemAccessoryView : UIView { // (Swift)
    /* instance variables */
    __C.CALayer backgroundLayer;
    __C.CALayer backgroundFill;
    __C.CAGradientLayer? _gradientLayer;
    __C.UIImageView? _imageView;
    __C.UILabel? _liveLabel;
    T1TwitterSwift.FleetLineItemViewModel.AccessoryType accessoryType;
    T1TwitterSwift.FleetLineItemAccessoryView.AccessorySize accessorySize;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)dynamicColorsDidReload:(id)reload;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift26FleetLineItemAccessoryView_h */
