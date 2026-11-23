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
