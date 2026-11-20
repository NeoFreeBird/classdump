//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatConversationList28ConversationListTitleRowView_h
#define _TtC20ChatConversationList28ConversationListTitleRowView_h
@import Foundation;

@class ChatUI.AffiliateBadgeView, UIView, _$s10Foundation4DateVMn ?, _$sSo7UILabelC;

@interface ChatConversationList.ConversationListTitleRowView : UIView { // (Swift)
    /* instance variables */
    ChatUI.AffiliateBadgeView badgeRowView;
    __C.UILabel timestampLabel;
    __C.UILabel titleLabel;
    nominal type descriptor for Foundation.Date ? currentTimestamp;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20ChatConversationList28ConversationListTitleRowView_h */
