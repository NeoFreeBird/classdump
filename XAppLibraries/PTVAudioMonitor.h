//
#ifndef PTVAudioMonitor_h
#define PTVAudioMonitor_h
@import Foundation;

#include "RTCAudioMonitor-Protocol.h"

@class NSObject, NSString;

@interface PTVAudioMonitor : NSObject <RTCAudioMonitor> {
    /* instance variables */
    int running_max;
    int sample_count;
}

@property (readonly, nonatomic) int audioLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)onAudioBuffer:(const void *)buffer frames:(int)frames channels:(int)channels bits:(int)bits;
- (void)recordMax:(int)max count:(int)count;

@end

#endif /* PTVAudioMonitor_h */
