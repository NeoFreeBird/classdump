//
#ifndef _TtC15ChatEmojiPicker25EmojiPickerTrayGridLayout_h
#define _TtC15ChatEmojiPicker25EmojiPickerTrayGridLayout_h
@import Foundation;

@class UICollectionViewCompositionalLayout;

@interface ChatEmojiPicker.EmojiPickerTrayGridLayout : UICollectionViewCompositionalLayout // (Swift)

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSection:(id)section;
- (id)initWithSection:(id)section configuration:(id)configuration;
- (id)initWithSectionProvider:(id /* block */)provider;
- (id)initWithSectionProvider:(id /* block */)provider configuration:(id)configuration;

@end

#endif /* _TtC15ChatEmojiPicker25EmojiPickerTrayGridLayout_h */
