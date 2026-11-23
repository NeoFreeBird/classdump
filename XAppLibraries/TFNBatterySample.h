//
#ifndef TFNBatterySample_h
#define TFNBatterySample_h
@import Foundation;

@class NSObject;

@interface TFNBatterySample : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) float level;
@property (nonatomic) long long state;

/* class methods */
+ (id)sampleFromDictionary:(id)dictionary;

@end

#endif /* TFNBatterySample_h */
