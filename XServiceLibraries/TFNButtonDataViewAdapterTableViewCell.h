//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNButtonDataViewAdapterTableViewCell_h
#define TFNButtonDataViewAdapterTableViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIView;

@interface TFNButtonDataViewAdapterTableViewCell : TFNTableViewCell

@property (retain, nonatomic) UIView *button;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)cleanup;

@end

#endif /* TFNButtonDataViewAdapterTableViewCell_h */
