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
