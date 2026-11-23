//
#ifndef _TtC11ChatGrokBot26GrokBotVoiceAttachmentView_h
#define _TtC11ChatGrokBot26GrokBotVoiceAttachmentView_h
@import Foundation;

@class ChatModels.AudioAttachment ?, ChatModels.AudioPlaybackStream ?, ChatModels.ChatMessageItemBubbleStyle, ChatUI.MessageAttachmentAudioView, Swift.Bool, UIView, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo7UIColorCSg;

@interface ChatGrokBot.GrokBotVoiceAttachmentView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool ownsHorizontalPans;
    __C.UIColor? userBubbleColor;
    ChatUI.MessageAttachmentAudioView audioView;
    ChatModels.AudioAttachment ? audioAttachment;
    ChatModels.AudioPlaybackStream ? audioPlaybackStream;
    ChatModels.ChatMessageItemBubbleStyle bubbleStyle;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.String messageID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot26GrokBotVoiceAttachmentView_h */
