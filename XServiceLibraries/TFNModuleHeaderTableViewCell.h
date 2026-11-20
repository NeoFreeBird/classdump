//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModuleHeaderTableViewCell_h
#define TFNModuleHeaderTableViewCell_h
@import Foundation;

#include "TFNModuleHeaderView.h"
#include "TFNTableViewCell.h"

@interface TFNModuleHeaderTableViewCell : TFNTableViewCell

@property (readonly, nonatomic) TFNModuleHeaderView *headerView;
@property (nonatomic) double headerViewVerticalOffset;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setHostProvidesBackground:(_Bool)background;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* TFNModuleHeaderTableViewCell_h */
