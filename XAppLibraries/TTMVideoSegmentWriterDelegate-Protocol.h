//
#ifndef TTMVideoSegmentWriterDelegate_Protocol_h
#define TTMVideoSegmentWriterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMVideoSegmentWriterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)segmentWriterWillStartRecording:(id)recording;
- (void)segmentWriterDidStartRecording:(id)recording;
- (void)segmentWriterWillStopRecording:(id)recording;
- (void)segmentWriterDidStopRecording:(id)recording;
- (void)segmentWriter:(id)writer didFailWithError:(id)error;
- (void)segmentWriter:(id)writer didRecordInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval;

@end

#endif /* TTMVideoSegmentWriterDelegate_Protocol_h */
