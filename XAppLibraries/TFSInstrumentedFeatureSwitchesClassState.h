//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSInstrumentedFeatureSwitchesClassState_h
#define TFSInstrumentedFeatureSwitchesClassState_h
@import Foundation;

@class NSMutableArray, NSMutableSet, NSObject;

@interface TFSInstrumentedFeatureSwitchesClassState : NSObject

@property (retain, nonatomic) NSMutableSet *overriddenFeatureSwitchKeysSetForRun;
@property (retain, nonatomic) NSMutableSet *queriedFeatureSwitchKeysSetForRun;
@property (retain, nonatomic) NSMutableSet *overriddenFeatureSwitchKeysSetForTestCase;
@property (retain, nonatomic) NSMutableArray *queriedKeysAndValuesForTestCase;

/* instance methods */
- (id)init;

@end

#endif /* TFSInstrumentedFeatureSwitchesClassState_h */
