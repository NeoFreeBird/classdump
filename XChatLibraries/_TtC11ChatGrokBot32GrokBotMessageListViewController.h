//
#ifndef _TtC11ChatGrokBot32GrokBotMessageListViewController_h
#define _TtC11ChatGrokBot32GrokBotMessageListViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageListView, UIViewController;

@interface ChatGrokBot.GrokBotMessageListViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageListView transcriptView;
}

/* instance methods */
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot32GrokBotMessageListViewController_h */
