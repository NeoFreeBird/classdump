//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatConversationList31ConversationListBotTitleRowView_h
#define _TtC20ChatConversationList31ConversationListBotTitleRowView_h
@import Foundation;

@class UIView, _$s10Foundation4DateVMn ?, _$sSaySo11UIImageViewCG, _$sSo7UILabelC;

@interface ChatConversationList.ConversationListBotTitleRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel roleLabel;
    __C.UILabel timestampLabel;
    __C.UILabel titleLabel;
    [__C.UIImageView] badgeViews;
    nominal type descriptor for Foundation.Date ? currentTimestamp;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20ChatConversationList31ConversationListBotTitleRowView_h */
