//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections25ElectionsCandidateRowView_h
#define _TtC10XElections25ElectionsCandidateRowView_h
@import Foundation;

@class UIView, XElections.ElectionsImageLoader ?, XElections.ElectionsPartyBadgeView, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface XElections.ElectionsCandidateRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTapProfile;
    __C.UIImageView avatarView;
    XElections.ElectionsImageLoader ? $__lazy_storage_$_avatarLoader;
    __C.UILabel nameLabel;
    XElections.ElectionsPartyBadgeView partyBadge;
    __C.UILabel subtitleLabel;
    __C.UILabel percentLabel;
    __C.UILabel votesLabel;
    __C.UIImageView winnerView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)accessibilityActivate;
- (void)didTapProfile;

@end

#endif /* _TtC10XElections25ElectionsCandidateRowView_h */
