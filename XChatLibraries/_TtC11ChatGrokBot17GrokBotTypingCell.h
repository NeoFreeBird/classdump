//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot17GrokBotTypingCell_h
#define _TtC11ChatGrokBot17GrokBotTypingCell_h
@import Foundation;

@class ChatGrokBot.GrokBotTypingRowView, UICollectionViewCell;

@interface ChatGrokBot.GrokBotTypingCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotTypingRowView rowView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)applyLayoutAttributes:(id)attributes;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot17GrokBotTypingCell_h */
