//
#ifndef _TtC11ChatGrokBot34GrokBotMessageViewerViewController_h
#define _TtC11ChatGrokBot34GrokBotMessageViewerViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageViewModel, ChatGrokBot.GrokBotMessageViewerListener ?, ChatGrokBot.GrokBotMessageViewerView, UIViewController, _$sSa -> ChatGrokBot.GrokBotMentionTarget;

@interface ChatGrokBot.GrokBotMessageViewerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageViewerView internalView;
    ChatGrokBot.GrokBotMessageViewerListener ? listener;
    Swift.Array -> ChatGrokBot.GrokBotMentionTarget mentionTargets;
    ChatGrokBot.GrokBotMessageViewModel message;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot34GrokBotMessageViewerViewController_h */
