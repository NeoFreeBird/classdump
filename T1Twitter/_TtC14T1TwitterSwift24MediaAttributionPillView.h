//
#ifndef _TtC14T1TwitterSwift24MediaAttributionPillView_h
#define _TtC14T1TwitterSwift24MediaAttributionPillView_h
@import Foundation;

#include "TFNPreviewSuppressing-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.MediaAttributionPillView.Layout ?, UIControl, _$s10TFNUISwift15BadgesImageViewCMn, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSa -> _$s14TwitterUISwift9UserBadgeOMn, _$sSo11UIImageViewC, _$sSo18TUIAvatarImageViewC, _$sSo34TUIAvatarImageViewStaticDataSourceCSg, _$sSo7UILabelC, _$sSo8NSStringCSg, _$ss5Int64VMn ?, _$syycSg, __C.UIEdgeInsets;

@interface T1TwitterSwift.MediaAttributionPillView : UIControl <TFNPreviewSuppressing, TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? tapHandler;
    (() -> ())? longPressHandler;
    __C.TUIAvatarImageViewStaticDataSource? avatarDataSource;
    __C.NSString? avatarCacheKey;
    nominal type descriptor for Swift.Int64 ? avatarUserID;
    Swift.Array -> nominal type descriptor for TwitterUISwift.UserBadge badges;
    Swift.Bool showsFromPrefix;
    __C.UIEdgeInsets contentInsets;
    T1TwitterSwift.MediaAttributionPillView.Layout ? cachedLayout;
    nominal type descriptor for CoreGraphics.CGFloat cachedLayoutMaxWidth;
    Swift.String? configuredDisplayName;
    nominal type descriptor for Swift.Int64 ? configuredSourceUserID;
    __C.UILabel fromLabel;
    __C.UILabel clippedFromLabel;
    __C.TUIAvatarImageView avatarView;
    __C.UILabel nameLabel;
    nominal type descriptor for TFNUISwift.BadgesImageView badgeImageView;
    __C.UIImageView trailingIconView;
    nominal type descriptor for CoreGraphics.CGFloat preferredMaxLayoutWidth;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleTap;
- (void)handleLongPress:(id)press;

@end

#endif /* _TtC14T1TwitterSwift24MediaAttributionPillView_h */
