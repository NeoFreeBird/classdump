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
