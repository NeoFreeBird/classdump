//
#ifndef _TtC11ChatGrokBot19GrokBotCartLineCell_h
#define _TtC11ChatGrokBot19GrokBotCartLineCell_h
@import Foundation;

@class ChatGrokBot.GrokBotCartLineView, UITableViewCell;

@interface ChatGrokBot.GrokBotCartLineCell : UITableViewCell { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCartLineView lineView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot19GrokBotCartLineCell_h */
