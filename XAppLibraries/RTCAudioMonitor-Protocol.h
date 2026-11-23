//
#ifndef RTCAudioMonitor_Protocol_h
#define RTCAudioMonitor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCAudioMonitor <NSObject>

@required

/* required instance methods */
- (void)onAudioBuffer:(const void *)buffer frames:(int)frames channels:(int)channels bits:(int)bits;

@optional

@end

#endif /* RTCAudioMonitor_Protocol_h */
