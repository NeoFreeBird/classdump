//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModuleFooterTableViewCell_h
#define TFNModuleFooterTableViewCell_h
@import Foundation;

#include "TFNModuleFooterView.h"
#include "TFNTableViewCell.h"

@interface TFNModuleFooterTableViewCell : TFNTableViewCell

@property (readonly, nonatomic) TFNModuleFooterView *footerView;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)accessibilityLabel;

@end

#endif /* TFNModuleFooterTableViewCell_h */
