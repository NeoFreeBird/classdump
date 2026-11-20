//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
