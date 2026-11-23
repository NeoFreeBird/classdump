//
#ifndef PTVBroadcastDetailsTruncatedParticipantTableViewCell_h
#define PTVBroadcastDetailsTruncatedParticipantTableViewCell_h
@import Foundation;

#include "PTVTruncatedParticipantTableViewCell.h"

@interface PTVBroadcastDetailsTruncatedParticipantTableViewCell : PTVTruncatedParticipantTableViewCell

/* class methods */
+ (id)TitleColor;
+ (id)ForegroundColor;
+ (id)BackgroundColor;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* PTVBroadcastDetailsTruncatedParticipantTableViewCell_h */
