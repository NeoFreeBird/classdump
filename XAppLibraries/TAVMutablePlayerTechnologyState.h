//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
