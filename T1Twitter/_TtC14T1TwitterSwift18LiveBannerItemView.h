//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift18LiveBannerItemView_h
#define _TtC14T1TwitterSwift18LiveBannerItemView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class T1TwitterSwift.CaretWrapperView, T1TwitterSwift.LiveBannerItemViewModel, T1TwitterSwift.TileBroadcastAuthorView, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TFNDismissButtonC, _$sSo20T1LiveVideoBadgeViewC, _$sSo6UIViewC, _$sSo7UILabelC, __C.TFNDismissButtonType;

@interface T1TwitterSwift.LiveBannerItemView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.LiveBannerItemViewModel viewModel;
    __C.TFNDismissButton caret;
    __C.UIImageView imageView;
    __C.T1LiveVideoBadgeView liveBadge;
    __C.UIImageView icon;
    __C.UIView textContainer;
    __C.UILabel textLabel;
    __C.UILabel callToActionLabel;
    __C.UIStackView metadataStackView;
    __C.UIView overlayView;
    T1TwitterSwift.CaretWrapperView caretWrapper;
    T1TwitterSwift.TileBroadcastAuthorView broadcastAuthorView;
    __C.TFNDismissButtonType caretType;
}

/* instance methods */
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift18LiveBannerItemView_h */
