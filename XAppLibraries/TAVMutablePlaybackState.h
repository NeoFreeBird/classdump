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
