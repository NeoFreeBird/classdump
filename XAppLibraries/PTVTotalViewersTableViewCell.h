//
#ifndef PTVTotalViewersTableViewCell_h
#define PTVTotalViewersTableViewCell_h
@import Foundation;

#include "PTVBroadcastDetailsTableViewCell.h"
#include "PTVTotalViewersTableViewCellDelegate-Protocol.h"

@class UIButton, UILabel, UIView;

@interface PTVTotalViewersTableViewCell : PTVBroadcastDetailsTableViewCell {
    /* instance variables */
    UIView *_containerView;
    UILabel *_totalViewersLabel;
    UIButton *_liveViewersButton;
    UIButton *_replayViewersButton;
    _Bool _isShowingTotalViewers;
    long long _displayType;
    long long _liveViewersCount;
    long long _replayViewersCount;
    long long _totalViewers;
}

@property (weak, nonatomic) id <PTVTotalViewersTableViewCellDelegate> delegate;

/* class methods */
+ (id)TotalViewersTextColor;
+ (id)TotalViewersSubtitleTextColor;
+ (id)LiveViewersTextColor;
+ (id)LiveViewersSubtitleTextColor;
+ (id)LiveViewersSelectedTextColor;
+ (id)LiveViewersSelectedSubtitleTextColor;
+ (id)ReplayViewersTextColor;
+ (id)ReplayViewersSubtitleTextColor;
+ (id)ReplayViewersSelectedTextColor;
+ (id)ReplayViewersSelectedSubtitleTextColor;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)flexibleHeightContainerView;
- (void)liveButtonPressed;
- (void)replayButtonPressed;
- (void)configureWithViewModel:(id)model displayType:(long long)type;
- (void)setTotalViewers:(long long)viewers;
- (void)setLiveViewers:(long long)viewers replayViewers:(long long)viewers;
- (void)setStatsDisplayType:(long long)type;
- (void)setLiveAndReplayLabelAttributedStrings;

@end

#endif /* PTVTotalViewersTableViewCell_h */
