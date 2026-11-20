//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPSLaunchValueReader_h
#define TPSLaunchValueReader_h
@import Foundation;

@class NSObject;

@interface TPSLaunchValueReader : NSObject

/* class methods */
+ (long long)valueFromStringForKey:(id)key inFeatureSwitches:(id)switches makeImpression:(_Bool)impression;

@end

#endif /* TPSLaunchValueReader_h */
