//
#ifndef TFNAudiowaveArrayViewModel_h
#define TFNAudiowaveArrayViewModel_h
@import Foundation;

#include "TFNAudiowaveViewModel-Protocol.h"

@class NSObject, NSString;

@interface TFNAudiowaveArrayViewModel : NSObject <TFNAudiowaveViewModel> {
    /* instance variables */
    float * _values;
    unsigned long long _valuesLength;
    unsigned long long _valuesCount;
}

@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)valuesWithNumberOfBarsPerSecond:(double)second;
- (void)appendValue:(double)value;
- (void)calculateValues:(out float *)values forNumberOfBars:(unsigned long long)bars;

@end

#endif /* TFNAudiowaveArrayViewModel_h */
