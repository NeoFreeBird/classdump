//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastTotalStarsCell_h
#define PTVBroadcastTotalStarsCell_h
@import Foundation;

#include "PTVBroadcastDetailsTableViewCell.h"
#include "PTVTitleAndIconView.h"

@class UILabel;

@interface PTVBroadcastTotalStarsCell : PTVBroadcastDetailsTableViewCell {
    /* instance variables */
    UILabel *_titleLabel;
    PTVTitleAndIconView *_starAmountLabel;
}

@property (nonatomic) long long starAmount;

/* class methods */
+ (double)CellHeight;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* PTVBroadcastTotalStarsCell_h */
