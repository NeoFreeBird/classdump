//
#ifndef TFNModuleHeaderCollectionViewCell_h
#define TFNModuleHeaderCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"
#include "TFNModuleHeaderView.h"

@interface TFNModuleHeaderCollectionViewCell : TFNCollectionViewCell

@property (readonly, nonatomic) TFNModuleHeaderView *headerView;
@property (nonatomic) double headerViewVerticalOffset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* TFNModuleHeaderCollectionViewCell_h */
