//
#ifndef PTVWebRTCAudioMonitor_Protocol_h
#define PTVWebRTCAudioMonitor_Protocol_h
@import Foundation;

#include "RTCAudioMonitor-Protocol.h"

@protocol PTVWebRTCAudioMonitor <RTCAudioMonitor>

@required

@property (nonatomic, readonly) int audioLevel;

@optional

@end

#endif /* PTVWebRTCAudioMonitor_Protocol_h */
