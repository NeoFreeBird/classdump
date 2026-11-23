//
#ifndef _TtC14T1TwitterSwift34CashtagAttachmentSectionHeaderView_h
#define _TtC14T1TwitterSwift34CashtagAttachmentSectionHeaderView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewCSg, _$sSo7UILabelC, _$sSo8UIButtonCSg, _$syycSg;

@interface T1TwitterSwift.CashtagAttachmentSectionHeaderView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UIImageView? chevronImageView;
    __C.UIButton? trailingButton;
    (() -> ())? onToggle;
    (() -> ())? onTrailingButtonTap;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (void)handleTrailingButtonTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift34CashtagAttachmentSectionHeaderView_h */
