//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoTransmitter_Protocol_h
#define PTVVideoTransmitter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoTransmitter <NSObject>

@required

/* required instance methods */
- (void)setDelegate:(id)delegate;
- (int)addInput:(_Bool)input config:(id)config;
- (_Bool)onData:(id)data time:(double)time input:(int)input decodeAt:(double)at;
- (void)startConnection;
- (void)shutdown;
- (void)getAndResetBytesSent:(long long *)sent dropped:(long long *)dropped queueLength:(long long *)length;
- (void)setCaptureTime:(double)time;
- (void)noteTemporalDiscontinuity:(double)discontinuity;
- (double)translateTime:(double)time;
- (double)makeNTPfor:(double)ntpfor;
- (void)pushMetadata:(id)metadata pts:(double)pts;
- (void)resetInputs;
- (void)drainQueue:(id /* block */)queue;
- (_Bool)connectedAndRunning;
- (id)getStatistics;

@optional

@end

#endif /* PTVVideoTransmitter_Protocol_h */
