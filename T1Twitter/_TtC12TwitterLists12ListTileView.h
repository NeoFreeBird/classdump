//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TwitterLists12ListTileView_h
#define _TtC12TwitterLists12ListTileView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s14TFSTwitterCore11TwitterListVMn ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo20TFNRoundedCornerViewC, _$sSo7UIImageC, _$sSo7UILabelC;

@interface TwitterLists.ListTileView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    __C.TFNRoundedCornerView highlightedView;
    __C.UIImageView bannerImageView;
    __C.UILabel nameLabel;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Bool highlighted;
    __C.UIImage placeholderBannerImage;
    nominal type descriptor for TFSTwitterCore.TwitterList ? viewModel;
}

/* instance methods */
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12TwitterLists12ListTileView_h */
