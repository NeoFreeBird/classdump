//
#ifndef T1CameraModeSelectorCollectionViewCell_h
#define T1CameraModeSelectorCollectionViewCell_h
@import Foundation;

@class NSString, UICollectionViewCell, UIColor, UIFont, UILabel;

@interface T1CameraModeSelectorCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)attributes;
- (void)setSelected:(_Bool)selected;
- (void)_t1_main_updateLabel;

@end

#endif /* T1CameraModeSelectorCollectionViewCell_h */
