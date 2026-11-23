//
#ifndef PTVSurveyPillCollectionViewCell_h
#define PTVSurveyPillCollectionViewCell_h
@import Foundation;

@class UICollectionViewCell, UILabel;

@interface PTVSurveyPillCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel;

/* class methods */
+ (struct CGSize { double x0; double x1; })SizeThatFits:(struct CGSize { double x0; double x1; })fits WithText:(id)text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;

@end

#endif /* PTVSurveyPillCollectionViewCell_h */
