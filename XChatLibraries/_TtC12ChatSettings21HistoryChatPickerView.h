//
#ifndef _TtC12ChatSettings21HistoryChatPickerView_h
#define _TtC12ChatSettings21HistoryChatPickerView_h
@import Foundation;

@class ChatSettings.HistoryChatPickerState, ChatSettings.HistoryChatPickerViewListener ?, ChatUI.ChatImageLoading, Swift.Bool, UIView, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$sSD -> ChatModelsCore.ConversationID ChatUI.ConversationAvatarStyle, _$sSD -> ChatModelsCore.ConversationID ChatUI.ConversationAvatarView, _$sSo7UILabelC;

@interface ChatSettings.HistoryChatPickerView : UIView { // (Swift)
    /* instance variables */
    ChatSettings.HistoryChatPickerViewListener ? listener;
    ChatSettings.HistoryChatPickerState state;
    ChatUI.ChatImageLoading imageLoader;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Bool showsSearchField;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatUI.ConversationAvatarStyle avatarStyles;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatUI.ConversationAvatarView avatarViews;
    __C.UILabel noticeLabel;
    nominal type descriptor for XDesignSystem.Input searchInput;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12ChatSettings21HistoryChatPickerView_h */
