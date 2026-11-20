//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatConversationList30ConversationListShimmerRowView_h
#define _TtC20ChatConversationList30ConversationListShimmerRowView_h
@import Foundation;

@class UIView, _$s13XDesignSystem22ShimmerPlaceholderViewCMn, _$sSo6UIViewC;

@interface ChatConversationList.ConversationListShimmerRowView : UIView { // (Swift)
    /* instance variables */
    __C.UIView avatarContainerView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView avatarView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView subtitleView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView timestampView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView titleView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20ChatConversationList30ConversationListShimmerRowView_h */
