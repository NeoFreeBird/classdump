//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift17ProfileUpsellView_h
#define _TtC14T1TwitterSwift17ProfileUpsellView_h
@import Foundation;

@class T1TwitterSwift.ProfileUpsellBackgroundView ?, T1TwitterSwift.ProfileUpsellViewModel, UIView, _$sSo11UIImageViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.ProfileUpsellView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ProfileUpsellViewModel viewModel;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.TFNButton? $__lazy_storage_$_closeButton;
    __C.UILabel? $__lazy_storage_$_bodyLabel;
    __C.TFNButton? $__lazy_storage_$_upsellButton;
    T1TwitterSwift.ProfileUpsellBackgroundView ? $__lazy_storage_$_backgroundView;
    __C.UIImageView? $__lazy_storage_$_iconView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)onDismiss;
- (void)onAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift17ProfileUpsellView_h */
