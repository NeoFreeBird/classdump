//
#ifndef TFNModuleFooterCollectionViewCell_h
#define TFNModuleFooterCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"
#include "TFNModuleFooterView.h"

@interface TFNModuleFooterCollectionViewCell : TFNCollectionViewCell

@property (readonly, nonatomic) TFNModuleFooterView *footerView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)accessibilityLabel;

@end

#endif /* TFNModuleFooterCollectionViewCell_h */
