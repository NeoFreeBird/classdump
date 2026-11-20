//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastStatsTableViewCellKVO_h
#define PTVBroadcastStatsTableViewCellKVO_h
@import Foundation;

#include "PTVBroadcastStats.h"
#include "PTVBroadcastStatsTableViewCell.h"

@interface PTVBroadcastStatsTableViewCellKVO : PTVBroadcastStatsTableViewCell {
    /* instance variables */
    PTVBroadcastStats *_broadcastStats;
    long long _numberOfCommentsReceived;
    long long _displayType;
    _Bool _isBroadcaster;
    _Bool _shouldShowTimeWatchedBreakdown;
}

/* class methods */
+ (double)CellHeightWithBroadcastStats:(id)stats NumberOfCommentsReceived:(long long)received DisplayType:(long long)type ShouldShowTimeWatchedBreakdown:(_Bool)breakdown IsBroadcaster:(_Bool)broadcaster SuperviewWidth:(double)width;
+ (id)StatDisplayStylesShouldShowTimeWatchedBreakdown:(_Bool)breakdown;
+ (id)StatNamesForDisplayType:(long long)type ShouldShowTimeWatchedBreakdown:(_Bool)breakdown IsBroadcaster:(_Bool)broadcaster;
+ (id)StatValuesFromBroadcastStats:(id)stats NumberOfCommentsReceived:(long long)received DisplayType:(long long)type ShouldShowTimeWatchedBreakdown:(_Bool)breakdown IsBroadcaster:(_Bool)broadcaster;
+ (id)LargestUnitFormattedStringFromTimeInterval:(double)interval;
+ (double)CollapsedCellHeight;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)createNewStatLabels;
- (id)tooltipText;
- (void)setBroadcastStats:(id)stats numberOfCommentsReceived:(long long)received shouldShowTimeWatchedBreakdown:(_Bool)breakdown;
- (void)setStatsDisplayType:(long long)type;
- (void)setNewNameColorAndLabelValues;
- (void)setIsBroadcaster:(_Bool)broadcaster;

@end

#endif /* PTVBroadcastStatsTableViewCellKVO_h */
