//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TwitterLists24ListDetailsTableViewCell_h
#define _TtC12TwitterLists24ListDetailsTableViewCell_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class TFNTableViewCell, TwitterLists.ListDetailsTableViewCell.Style, TwitterLists.ListDetailsTableViewCell.ViewModel ?, TwitterLists.ListDetailsTableViewCellDelegate ?, _$s10TFNUISwift15BadgesImageViewCMn, _$s10TFNUISwift20FixedButtonContainerCMn, _$s13TFSObservable8ObserverCMn _$sySbGSg, _$sSbSg, _$sSo11UIImageViewC, _$sSo16TFNDismissButtonC, _$sSo16TIPImagePipelineCSg, _$sSo18TUIAvatarImageViewC, _$sSo19TUIUserFacepileViewC, _$sSo23ListCopyStringsProvider_pSg, _$sSo6UIViewC, _$sSo7UIImageCSg, _$sSo7UILabelC, _$sSo9TFNButtonC, __C.CGSize ?;

@interface TwitterLists.ListDetailsTableViewCell : TFNTableViewCell <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    TwitterLists.ListDetailsTableViewCellDelegate ? delegate;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIImage? $__lazy_storage_$_placeholderBannerImage;
    __C.UILabel listNameLabel;
    __C.UIImageView listPrivateImageView;
    __C.TUIAvatarImageView ownerAvatarImageView;
    __C.TUIUserFacepileView facepilesView;
    __C.UILabel ownerNameLabel;
    nominal type descriptor for TFNUISwift.BadgesImageView verifiedImageView;
    __C.UILabel ownerUsernameLabel;
    __C.TFNButton pinButton;
    __C.UIView pinContainerView;
    __C.TFNDismissButton dismissButton;
    nominal type descriptor for TFNUISwift.FixedButtonContainer followButtonContainer;
    __C.TFNButton followButton;
    __C.UIImageView bannerImageView;
    __C.UILabel descriptionLabel;
    __C.UILabel followersCountLabel;
    TwitterLists.ListDetailsTableViewCell.Style style;
    __C.ListCopyStringsProvider? stringsProvider;
    TwitterLists.ListDetailsTableViewCell.ViewModel ? viewModel;
    nominal type descriptor for TFSObservable.Observer _$sySbGSg isPinnedObserver;
    Swift.Bool? cachedIsPinned;
    __C.CGSize ? $__lazy_storage_$_enabledPinButtonIntrinsicContentSize;
}

/* instance methods */
- (id)calculatedLayoutMetrics;
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)pinnedImageTappedWithTapGestureRecognizer:(id)recognizer;
- (void)dismissButtonWasTapped;
- (void)followButtonWasTappedWithTapGestureRecognizer:(id)recognizer;

@end

#endif /* _TtC12TwitterLists24ListDetailsTableViewCell_h */
