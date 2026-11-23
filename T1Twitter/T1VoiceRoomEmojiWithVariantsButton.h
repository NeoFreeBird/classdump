//
#ifndef T1VoiceRoomEmojiWithVariantsButton_h
#define T1VoiceRoomEmojiWithVariantsButton_h
@import Foundation;

@class NSArray, NSString, UIButton, UILongPressGestureRecognizer, UIView;

@interface T1VoiceRoomEmojiWithVariantsButton : UIButton

@property (retain, nonatomic) NSString *emoji;
@property (nonatomic) struct CGSize { double x0; double x1; } emojiSize;
@property (retain, nonatomic) NSArray *variants;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *variantsPickerView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;

/* instance methods */
- (void)setEmoji:(id)emoji size:(struct CGSize { double x0; double x1; })size;
- (void)_t1_updateImage;
- (void)_t1_handleLongPressGesture:(id)gesture;

@end

#endif /* T1VoiceRoomEmojiWithVariantsButton_h */
