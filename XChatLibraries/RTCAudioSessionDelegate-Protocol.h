//
#ifndef RTCAudioSessionDelegate_Protocol_h
#define RTCAudioSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCAudioSessionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)audioSessionDidBeginInterruption:(id)interruption;
- (void)audioSessionDidEndInterruption:(id)interruption shouldResumeSession:(_Bool)session;
- (void)audioSessionDidChangeRoute:(id)route reason:(unsigned long long)reason previousRoute:(id)route;
- (void)audioSessionMediaServerTerminated:(id)terminated;
- (void)audioSessionMediaServerReset:(id)reset;
- (void)audioSession:(id)session didChangeCanPlayOrRecord:(_Bool)record;
- (void)audioSessionDidStartPlayOrRecord:(id)record;
- (void)audioSessionDidStopPlayOrRecord:(id)record;
- (void)audioSession:(id)session didChangeOutputVolume:(float)volume;
- (void)audioSession:(id)session didDetectPlayoutGlitch:(long long)glitch;
- (void)audioSession:(id)session willSetActive:(_Bool)active;
- (void)audioSession:(id)session didSetActive:(_Bool)active;
- (void)audioSession:(id)session failedToSetActive:(_Bool)active error:(id)error;
- (void)audioSession:(id)session audioUnitStartFailedWithError:(id)error;

@end

#endif /* RTCAudioSessionDelegate_Protocol_h */
