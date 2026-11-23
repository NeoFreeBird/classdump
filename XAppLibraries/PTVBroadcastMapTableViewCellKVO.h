//
#ifndef PTVBroadcastMapTableViewCellKVO_h
#define PTVBroadcastMapTableViewCellKVO_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastMapTableViewCell.h"

@class NSDate, NSDateFormatter, NSTimer;

@interface PTVBroadcastMapTableViewCellKVO : PTVBroadcastMapTableViewCell {
    /* instance variables */
    PTVBroadcastMapTableViewCellKVO *_weakSelf;
    _Bool _useStaticMapAnnotation;
    _Bool _observingBroadcast;
    NSDateFormatter *_dateFormatter;
    NSDate *_datePlayheadTimeSetAt;
}

@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) NSTimer *localTimeTimer;
@property (nonatomic) _Bool fetchingTimeZone;
@property (nonatomic) double currentVideoPosition;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)observeBroadcast;
- (void)unobserveBroadcast;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)setBroadcast:(id)broadcast useStaticMapAnnotation:(_Bool)annotation;
- (id)currentVideoPlayheadDate;
- (void)pauseLocalTimeTimer;
- (void)resumeLocalTimeTimer;
- (void)getTimeZoneAndSetLocalTime;
- (void)setLocalTimeForTimezone:(id)timezone;
- (void)createLocalTimeTimer;
- (void)updateLocalTime;

@end

#endif /* PTVBroadcastMapTableViewCellKVO_h */
