//
#ifndef _TtC23TwitterProfileModulesUI19JobCarouselItemCell_h
#define _TtC23TwitterProfileModulesUI19JobCarouselItemCell_h
@import Foundation;

@class TFNCollectionViewCell, TwitterProfileModules.JobViewModel ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterProfileModulesUI.JobCarouselItemCell : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    __C.NSLayoutConstraint? titleWidthConstraint;
    __C.NSLayoutConstraint? locationWidthConstraint;
    __C.UIView? overlayView;
    TwitterProfileModules.JobViewModel ? jobItem;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_locationLabel;
    __C.UIImageView? $__lazy_storage_$_locationIcon;
    __C.UIStackView? $__lazy_storage_$_locationLabelWithIcon;
    __C.UILabel? $__lazy_storage_$_salaryLabel;
    __C.UIImageView? $__lazy_storage_$_salaryIcon;
    __C.UIStackView? $__lazy_storage_$_salaryLabelWithIcon;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC23TwitterProfileModulesUI19JobCarouselItemCell_h */
