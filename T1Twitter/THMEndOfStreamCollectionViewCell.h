//
#ifndef THMEndOfStreamCollectionViewCell_h
#define THMEndOfStreamCollectionViewCell_h
@import Foundation;

@class TFNCollectionViewCell, UIImageView;

@interface THMEndOfStreamCollectionViewCell : TFNCollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;

@end

#endif /* THMEndOfStreamCollectionViewCell_h */
