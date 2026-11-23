//
#ifndef TFSFeatureSwitchProvider_Protocol_h
#define TFSFeatureSwitchProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSFeatureSwitchProvider <NSObject>

@required

/* required instance methods */
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

@optional

@end

#endif /* TFSFeatureSwitchProvider_Protocol_h */
