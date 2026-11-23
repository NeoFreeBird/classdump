//
#ifndef TFNViewDataViewAdapterCollectionViewCell_h
#define TFNViewDataViewAdapterCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"

@class UIView;

@interface TFNViewDataViewAdapterCollectionViewCell : TFNCollectionViewCell

@property (retain, nonatomic) UIView *view;
@property (nonatomic) _Bool viewIncludesContentEdgeInsets;

/* instance methods */
- (void)layoutSubviews;
- (void)cleanup;

@end

#endif /* TFNViewDataViewAdapterCollectionViewCell_h */
