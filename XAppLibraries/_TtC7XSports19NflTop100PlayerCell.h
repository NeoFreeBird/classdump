//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports19NflTop100PlayerCell_h
#define _TtC7XSports19NflTop100PlayerCell_h
@import Foundation;

@class UICollectionViewCell, XSports.NflTop100InlineVideoSession ?, XSports.NflTop100PlayerCell.Style, XSports.NflTop100RankedAvatarView, XSports.NflTop100Row ?, XSports.NflTop100Row _$scSg ->, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSSSg, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC;

@interface XSports.NflTop100PlayerCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    XSports.NflTop100RankedAvatarView rankedAvatarView;
    __C.UILabel nameLabel;
    __C.UIImageView verifiedBadge;
    __C.UIImageView teamLogoView;
    __C.UILabel positionLabel;
    __C.UILabel handleLabel;
    __C.UIImageView thumbnailView;
    __C.UIImageView thumbnailPlayIcon;
    __C.UIView dividerView;
    __C.UIImageView posterView;
    __C.UIView videoContainer;
    __C.UIImageView posterPlayIcon;
    __C.UIButton likeButton;
    __C.UILabel likeCountLabel;
    __C.UIButton shareButton;
    __C.UIView skeletonShapes;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_skeletonView;
    __C.UIView skeletonAvatar;
    __C.UIView skeletonName;
    __C.UIView skeletonHandle;
    __C.UIView skeletonMedia;
    XSports.NflTop100PlayerCell.Style style;
    XSports.NflTop100Row ? row;
    XSports.NflTop100Row _$scSg -> onSelectProfile;
    XSports.NflTop100Row _$scSg -> onSelectTweet;
    XSports.NflTop100Row _$scSg -> onSelectVideo;
    XSports.NflTop100Row _$scSg -> onToggleLike;
    XSports.NflTop100Row _$scSg -> onShare;
    XSports.NflTop100InlineVideoSession ? videoSession;
    Swift.String? installedTweetID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTapProfile;
- (void)didTapTweet;
- (void)didTapVideo;
- (void)didTapLike;
- (void)didTapShare;

@end

#endif /* _TtC7XSports19NflTop100PlayerCell_h */
