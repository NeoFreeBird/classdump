//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastTotalModerationActionsTableViewCell_h
#define PTVBroadcastTotalModerationActionsTableViewCell_h
@import Foundation;

#include "PTVBroadcastDetailsTableViewCell.h"
#include "PTVTitleAndIconView.h"

@class UILabel, UIView;

@interface PTVBroadcastTotalModerationActionsTableViewCell : PTVBroadcastDetailsTableViewCell {
    /* instance variables */
    UILabel *_titleLabel;
    PTVTitleAndIconView *_countLabel;
    UIView *_containerView;
}

@property (nonatomic) unsigned long long actionCount;

/* class methods */
+ (double)CellHeight;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)flexibleHeightContainerView;

@end

#endif /* PTVBroadcastTotalModerationActionsTableViewCell_h */
