//
#ifndef PTVBroadcastTableViewCell_h
#define PTVBroadcastTableViewCell_h
@import Foundation;

#include "PTVBroadcastCompactView.h"
#include "PTVProfileImageViewDelegate-Protocol.h"
#include "PTVTableViewCell.h"

@class NSString;

@interface PTVBroadcastTableViewCell : PTVTableViewCell <PTVProfileImageViewDelegate>

@property (readonly, nonatomic) PTVBroadcastCompactView *broadcastView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)HeightForTableViewCellWithFeaturedReason:(id)reason SocialProof:(id)proof IsLastRow:(_Bool)row TableViewWidth:(double)width;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setWatchDelegate:(id)delegate;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })broadcastViewBounds;
- (double)bottomBorderInsetLeft;
- (void)profileImagePressed:(id)pressed;
- (void)didPressAccessoryLabelOfProfileImageView:(id)view;

@end

#endif /* PTVBroadcastTableViewCell_h */
