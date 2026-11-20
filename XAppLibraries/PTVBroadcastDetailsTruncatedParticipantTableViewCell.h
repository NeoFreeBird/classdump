//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
