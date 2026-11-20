//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI18AffiliateBadgeView_h
#define _TtC6ChatUI18AffiliateBadgeView_h
@import Foundation;

@class ChatUI.ChatImageLoading ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> ChatModelsCore.ChatUserBadge, _$sSa -> _$s7Combine11CancellableMp, _$sSaySo11UIImageViewCG, _$sSaySo7UIImageCSgG;

@interface ChatUI.AffiliateBadgeView : UIView { // (Swift)
    /* instance variables */
    [__C.UIImageView] badgeImageViews;
    Swift.Array -> ChatModelsCore.ChatUserBadge badges;
    Swift.Array -> protocol descriptor for Combine.Cancellable imageLoadCancellables;
    ChatUI.ChatImageLoading ? imageLoader;
    [__C.UIImage?] remoteSourceImages;
    nominal type descriptor for CoreGraphics.CGFloat size;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6ChatUI18AffiliateBadgeView_h */
