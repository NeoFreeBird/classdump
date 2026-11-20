//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVMutablePlaybackState_h
#define TAVMutablePlaybackState_h
@import Foundation;

#include "TAVPlaybackState.h"

@class NSNumber;

@interface TAVMutablePlaybackState : TAVPlaybackState

@property (copy, nonatomic) NSNumber *relativePresentationOffset;
@property (copy, nonatomic) NSNumber *targetRelativePresentationOffset;
@property (copy, nonatomic) NSNumber *minimumSafeRPO;
@property (retain, nonatomic) NSNumber *testTurkeyAudioSampleRate;
@property (retain, nonatomic) NSNumber *testTurkeyAudioFormatID;
@property (retain, nonatomic) NSNumber *testTurkeyAudioChannelsPerFrame;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVMutablePlaybackState_h */
