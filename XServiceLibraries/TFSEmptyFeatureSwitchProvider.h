//
#ifndef TFSEmptyFeatureSwitchProvider_h
#define TFSEmptyFeatureSwitchProvider_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@class NSObject;

@interface TFSEmptyFeatureSwitchProvider : NSObject <TFSFeatureSwitchProvider> // (Swift)

/* class methods */
+ (id)sharedProvider;

/* instance methods */
- (_Bool)boolForKey:(id)key;
- (double)doubleForKey:(id)key;
- (long long)integerForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)setForKey:(id)key;
- (_Bool)unsafePeekBoolForKey:(id)key;
- (double)unsafePeekDoubleForKey:(id)key;
- (long long)unsafePeekIntegerForKey:(id)key;
- (id)unsafePeekStringForKey:(id)key;
- (id)unsafePeekArrayForKey:(id)key;
- (id)unsafePeekSetForKey:(id)key;
- (id)init;

@end

#endif /* TFSEmptyFeatureSwitchProvider_h */
