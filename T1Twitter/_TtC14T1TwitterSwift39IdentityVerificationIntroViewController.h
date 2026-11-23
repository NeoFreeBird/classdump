//
#ifndef _TtC14T1TwitterSwift39IdentityVerificationIntroViewController_h
#define _TtC14T1TwitterSwift39IdentityVerificationIntroViewController_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class T1TwitterSwift.VerificationVendor ?, TFNViewController, _$s13XDesignSystem4BlurCMn, _$sSS, _$sSo11UIImageViewCSg, _$sSo11UIStackViewC, _$sSo11UIStackViewCSg, _$sSo12UIScrollViewCSg, _$sSo17TFNActiveTextItemCSg, _$sSo17TFNTwitterAccountC, _$sSo19TFNCheckmarkControlCSg, _$sSo6UIViewC, _$sSo7UIImageCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg, _$syycSg, __C.CGSize ?;

@interface T1TwitterSwift.IdentityVerificationIntroViewController : TFNViewController <TFNAttributedTextViewDelegate, UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    Swift.String entrySource;
    __C.TFNButton? $__lazy_storage_$_closeButton;
    nominal type descriptor for XDesignSystem.Blur closeBackgroundView;
    __C.TFNButton? $__lazy_storage_$_startButton;
    __C.TFNButton? $__lazy_storage_$_cancelButton;
    __C.UIScrollView? $__lazy_storage_$_scrollView;
    __C.UIStackView? $__lazy_storage_$_contentStackView;
    __C.TFNCheckmarkControl? $__lazy_storage_$_checkmarkControl;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.TFNActiveTextItem? $__lazy_storage_$_activeTextItem;
    __C.UIStackView? $__lazy_storage_$_consentStackView;
    __C.UIStackView? $__lazy_storage_$_headerStackView;
    __C.UIStackView checklistStackView;
    __C.UIView actionsDividerView;
    __C.UIStackView? $__lazy_storage_$_actionsStackView;
    __C.UIImage? headerImage;
    __C.CGSize ? $__lazy_storage_$_headerImageSize;
    __C.UIImageView? $__lazy_storage_$_backgroundHeaderImageView;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.VerificationVendor ? verificationVendor;
    (() -> ())? startHandler;
    (() -> ())? cancelHandler;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)accessibilityPerformEscape;
- (void)scrollViewDidScroll:(id)scroll;
- (void)handleTapStart;
- (void)handleTapCloseOrCancel;
- (void)handleTapConsentCheckmark;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)scribe;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift39IdentityVerificationIntroViewController_h */
