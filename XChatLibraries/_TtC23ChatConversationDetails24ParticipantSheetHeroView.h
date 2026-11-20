//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails24ParticipantSheetHeroView_h
#define _TtC23ChatConversationDetails24ParticipantSheetHeroView_h
@import Foundation;

@class ChatUI.ConversationAvatarView, UIView, _$syycSg;

@interface ChatConversationDetails.ParticipantSheetHeroView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onAvatarTap;
    ChatUI.ConversationAvatarView avatarView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleAvatarTap;

@end

#endif /* _TtC23ChatConversationDetails24ParticipantSheetHeroView_h */
