//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastDetailsTableViewCell_h
#define PTVBroadcastDetailsTableViewCell_h
@import Foundation;

#include "PTVTableViewCell.h"

@interface PTVBroadcastDetailsTableViewCell : PTVTableViewCell

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerViewInsets;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)flexibleHeightContainerView;

@end

#endif /* PTVBroadcastDetailsTableViewCell_h */
