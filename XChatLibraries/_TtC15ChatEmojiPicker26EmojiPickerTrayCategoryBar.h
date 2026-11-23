//
#ifndef _TtC15ChatEmojiPicker26EmojiPickerTrayCategoryBar_h
#define _TtC15ChatEmojiPicker26EmojiPickerTrayCategoryBar_h
@import Foundation;

@class ChatEmojiPicker.EmojiPickerGridSection ?, ChatEmojiPicker.EmojiPickerGridSection _$scSg ->, UIView, _$sSa -> ChatEmojiPicker.EmojiPickerGridSection, _$sSaySo8UIButtonCG, _$sSo12UIScrollViewC;

@interface ChatEmojiPicker.EmojiPickerTrayCategoryBar : UIView { // (Swift)
    /* instance variables */
    ChatEmojiPicker.EmojiPickerGridSection _$scSg -> onSectionTap;
    __C.UIScrollView scrollView;
    [__C.UIButton] buttons;
    Swift.Array -> ChatEmojiPicker.EmojiPickerGridSection sections;
    ChatEmojiPicker.EmojiPickerGridSection ? selectedSection;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC15ChatEmojiPicker26EmojiPickerTrayCategoryBar_h */
