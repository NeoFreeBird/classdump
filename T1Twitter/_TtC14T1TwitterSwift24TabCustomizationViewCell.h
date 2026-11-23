//
#ifndef _TtC14T1TwitterSwift24TabCustomizationViewCell_h
#define _TtC14T1TwitterSwift24TabCustomizationViewCell_h
@import Foundation;

@class T1TwitterSwift.TabCustomizationItem ?, TFNCollectionViewCell, _$sSo11UIImageViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.TabCustomizationViewCell : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.TabCustomizationItem ? selectedItem;
    __C.UIView? $__lazy_storage_$_containerView;
    __C.UIImageView? $__lazy_storage_$_iconImageView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
}

@property (nonatomic) _Bool selected;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (_Bool)isSelected;

@end

#endif /* _TtC14T1TwitterSwift24TabCustomizationViewCell_h */
