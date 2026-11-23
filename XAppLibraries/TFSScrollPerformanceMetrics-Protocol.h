//
#ifndef TFSScrollPerformanceMetrics_Protocol_h
#define TFSScrollPerformanceMetrics_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSScrollPerformanceMetrics <NSObject>

@required

/* required instance methods */
- (void)startRecordingMeasurements;
- (void)stopRecordingMeasurements;
- (void)notifyItemDidDisappearDuringScroll;
- (void)notifyScrollDidEnd;
- (void)startReportingFrameDropEvents;
- (void)pauseReportingFrameDropEvents;

@optional

@end

#endif /* TFSScrollPerformanceMetrics_Protocol_h */
