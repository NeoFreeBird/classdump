//
#ifndef TFNNoItemsCell_h
#define TFNNoItemsCell_h
@import Foundation;

#include "TFNTextCell.h"

@interface TFNNoItemsCell : TFNTextCell

/* class methods */
+ (double)heightForText:(id)text detailText:(id)text layoutMetrics:(id)metrics;
+ (double)estimatedHeightForText:(id)text detailText:(id)text layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* TFNNoItemsCell_h */
