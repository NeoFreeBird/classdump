//
#ifndef _TtC18TwitterAudiospaces30CardContentCommunityHeaderView_h
#define _TtC18TwitterAudiospaces30CardContentCommunityHeaderView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class TwitterAudiospaces.CardContentViewModel ?, UIView, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg, _$sSo8UIButtonC;

@interface TwitterAudiospaces.CardContentCommunityHeaderView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    __C.UIImageView? $__lazy_storage_$_thumbnailImageView;
    __C.UILabel? $__lazy_storage_$_nameLabel;
    __C.UIButton communityIdentifierButton;
    __C.UIStackView? $__lazy_storage_$_stackView;
    TwitterAudiospaces.CardContentViewModel ? viewModel;
}

/* instance methods */
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)calculatedLayoutMetrics;

@end

#endif /* _TtC18TwitterAudiospaces30CardContentCommunityHeaderView_h */
