//
#ifndef PTVFileRecordDelegate_Protocol_h
#define PTVFileRecordDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVFileRecordDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)outOfSpace;
- (void)recordingFailedWithError:(id)error;
- (void)newSegmentStarted;
- (void)segmentCompleted:(id)completed;
- (void)recordingDurationTimerTick:(struct { long long x0; int x1; unsigned int x2; long long x3; })tick;

@end

#endif /* PTVFileRecordDelegate_Protocol_h */
