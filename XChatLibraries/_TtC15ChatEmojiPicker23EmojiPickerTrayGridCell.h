//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15ChatEmojiPicker23EmojiPickerTrayGridCell_h
#define _TtC15ChatEmojiPicker23EmojiPickerTrayGridCell_h
@import Foundation;

@class NSString, UICollectionViewCell, _$sSo7UILabelC;

@interface ChatEmojiPicker.EmojiPickerTrayGridCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel label;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)_bridgedUpdateConfigurationUsingState:(id)state;
- (void)layoutSubviews;

@end

#endif /* _TtC15ChatEmojiPicker23EmojiPickerTrayGridCell_h */
