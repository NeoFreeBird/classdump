//
#ifndef TAVMutablePlayerTechnologyState_h
#define TAVMutablePlayerTechnologyState_h
@import Foundation;

#include "TAVPlayerTechnologyState.h"

@class NSNumber;

@interface TAVMutablePlayerTechnologyState : TAVPlayerTechnologyState

@property (copy, nonatomic) NSNumber *relativePresentationOffset;
@property (copy, nonatomic) NSNumber *minimumSafeRPO;
@property (retain, nonatomic) NSNumber *testTurkeyAudioSampleRate;
@property (retain, nonatomic) NSNumber *testTurkeyAudioFormatID;
@property (retain, nonatomic) NSNumber *testTurkeyAudioChannelsPerFrame;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVMutablePlayerTechnologyState_h */
