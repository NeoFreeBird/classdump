//
#ifndef _TtC23TwitterProfileModulesUI21CommunitiesModuleView_h
#define _TtC23TwitterProfileModulesUI21CommunitiesModuleView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"
#include "_TtC23TwitterProfileModulesUI20SpotlightCardControl.h"

@class TwitterProfileModules.CommunitiesProfileModule ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo16TIPImagePipelineCSg, _$sSo19TUIUserFacepileViewCSg, _$sSo23TIPImageViewFetchHelperC, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface TwitterProfileModulesUI.CommunitiesModuleView : TwitterProfileModulesUI.SpotlightCardControl <TUIImageViewFetchHelperDelegate, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    __C.TIPImageViewFetchHelper imageFetchHelper;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIStackView? $__lazy_storage_$_rootView;
    __C.UIStackView? $__lazy_storage_$_bodyView;
    __C.UIImageView? $__lazy_storage_$_imageView;
    __C.UIStackView? $__lazy_storage_$_communityDetailsVStackView;
    __C.UILabel? $__lazy_storage_$_communityNameLabel;
    __C.UILabel? $__lazy_storage_$_communityDescriptionLabel;
    __C.TUIUserFacepileView? $__lazy_storage_$_facePileView;
    __C.UILabel? $__lazy_storage_$_communityMemberCountLabel;
    __C.UIStackView? $__lazy_storage_$_membersHStackView;
    __C.UIView? $__lazy_storage_$_separatorView;
    __C.UIStackView? $__lazy_storage_$_buttonsHStackView;
    __C.TFNButton? $__lazy_storage_$_viewActionButton;
    TwitterProfileModules.CommunitiesProfileModule ? viewModel;
}

/* instance methods */
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI21CommunitiesModuleView_h */
