//
#ifndef GADDeviceAudioSignals_h
#define GADDeviceAudioSignals_h
@import Foundation;

#include "GADSignal-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface GADDeviceAudioSignals : NSObject <GADSignal>

@property (readonly, nonatomic) _Bool isOtherAudioPlaying;
@property (readonly, nonatomic) NSNumber *shouldSilenceAudioValue;
@property (readonly, nonatomic) float audioVolume;
@property (readonly, copy, nonatomic) NSArray *audioRoutePortNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)signalSource;

/* instance methods */
- (id)init;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADDeviceAudioSignals_h */
