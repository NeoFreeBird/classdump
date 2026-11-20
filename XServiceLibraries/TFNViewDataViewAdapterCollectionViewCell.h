//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
