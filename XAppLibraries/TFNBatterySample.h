//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
