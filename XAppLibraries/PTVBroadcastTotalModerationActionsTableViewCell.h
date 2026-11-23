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
