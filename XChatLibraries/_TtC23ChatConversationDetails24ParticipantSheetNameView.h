//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails24ParticipantSheetNameView_h
#define _TtC23ChatConversationDetails24ParticipantSheetNameView_h
@import Foundation;

@class UIView, _$sSD -> _$s10Foundation3URLVMn _$sSo7UIImageC, _$sSS, _$sSa -> ChatConversationDetails.ParticipantSheetNameView.NameBadge, _$sSa -> _$s7Combine11CancellableMp, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatConversationDetails.ParticipantSheetNameView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UILabel nameLabel;
    __C.UIImageView badgesImageView;
    __C.UILabel handleLabel;
    Swift.String name;
    Swift.Array -> ChatConversationDetails.ParticipantSheetNameView.NameBadge badges;
    Swift.Dictionary -> nominal type descriptor for Foundation.URL __C.UIImage remoteBadgeImages;
    Swift.Array -> protocol descriptor for Combine.Cancellable imageLoadCancellables;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)accessibilityActivate;
- (void)handleTap;

@end

#endif /* _TtC23ChatConversationDetails24ParticipantSheetNameView_h */
