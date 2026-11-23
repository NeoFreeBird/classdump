//
#ifndef TFNNoItemsCollectionViewCell_h
#define TFNNoItemsCollectionViewCell_h
@import Foundation;

#include "TFNTextCollectionViewCell.h"

@interface TFNNoItemsCollectionViewCell : TFNTextCollectionViewCell

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForText:(id)text detailText:(id)text constrainedToSize:(struct CGSize { double x0; double x1; })size contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TFNNoItemsCollectionViewCell_h */
