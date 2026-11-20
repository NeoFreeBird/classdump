//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNButtonDataViewAdapterCollectionViewCell_h
#define TFNButtonDataViewAdapterCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"

@class UIView;

@interface TFNButtonDataViewAdapterCollectionViewCell : TFNCollectionViewCell

@property (retain, nonatomic) UIView *button;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)cleanup;

@end

#endif /* TFNButtonDataViewAdapterCollectionViewCell_h */
