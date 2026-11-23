//
#ifndef PTVContributorsTableViewHeaderView_h
#define PTVContributorsTableViewHeaderView_h
@import Foundation;

#include "PTVDividerView.h"
#include "PTVTitleAndIconView.h"

@class UILabel, UIView;

@interface PTVContributorsTableViewHeaderView : UIView {
    /* instance variables */
    UILabel *_titleLabel;
    PTVTitleAndIconView *_totalStarsLabel;
    PTVTitleAndIconView *_helperStarLabel;
    PTVTitleAndIconView *_helperCoinLabel;
    PTVDividerView *_bottomDivider;
    UILabel *_exchangeDescriptionLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame loggedInUserIsBroadcaster:(_Bool)broadcaster;
- (void)setStarTotal:(long long)total;

@end

#endif /* PTVContributorsTableViewHeaderView_h */
