//
#ifndef TDTFPSUtility_h
#define TDTFPSUtility_h
@import Foundation;

@class NSObject;

@interface TDTFPSUtility : NSObject

/* class methods */
+ (double)frameRateWithTimestamps:(double *)timestamps size:(long long)size lastIndex:(long long)index vantageTime:(double)time;

@end

#endif /* TDTFPSUtility_h */
