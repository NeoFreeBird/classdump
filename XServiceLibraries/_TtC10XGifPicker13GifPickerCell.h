//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XGifPicker13GifPickerCell_h
#define _TtC10XGifPicker13GifPickerCell_h
@import Foundation;

@class UICollectionViewCell, XGifPicker.GifPickerItemView;

@interface XGifPicker.GifPickerCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    XGifPicker.GifPickerItemView itemView;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC10XGifPicker13GifPickerCell_h */
