//
#ifndef TAVAnalyticsVideoTimeToPlaybackPoint_h
#define TAVAnalyticsVideoTimeToPlaybackPoint_h
@import Foundation;

#include "TAVWallTime.h"

@class NSNumber, NSObject;

@interface TAVAnalyticsVideoTimeToPlaybackPoint : NSObject

@property (retain, nonatomic) NSNumber *videoTimeToStart;
@property (retain, nonatomic) NSNumber *videoTimeTo2Sec;
@property (nonatomic) _Bool shouldIgnoreTimeTo2SecEvent;
@property (retain, nonatomic) TAVWallTime *intentToPlayTimestamp;
@property (readonly, nonatomic) _Bool hasStartedToPlay;

/* instance methods */

@end

#endif /* TAVAnalyticsVideoTimeToPlaybackPoint_h */
