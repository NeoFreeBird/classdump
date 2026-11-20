//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
