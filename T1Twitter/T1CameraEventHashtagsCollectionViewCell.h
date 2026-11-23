//
#ifndef T1CameraEventHashtagsCollectionViewCell_h
#define T1CameraEventHashtagsCollectionViewCell_h
@import Foundation;

@class NSString, UICollectionViewCell, UIColor, UILabel;

@interface T1CameraEventHashtagsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *selectedColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_main_updateColor;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)selected;

@end

#endif /* T1CameraEventHashtagsCollectionViewCell_h */
