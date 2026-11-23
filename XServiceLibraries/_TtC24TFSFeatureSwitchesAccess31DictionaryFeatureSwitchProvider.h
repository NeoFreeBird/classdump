//
#ifndef _TtC24TFSFeatureSwitchesAccess31DictionaryFeatureSwitchProvider_h
#define _TtC24TFSFeatureSwitchesAccess31DictionaryFeatureSwitchProvider_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@class NSObject, _$sSo19NSMutableDictionaryC;

@interface TFSFeatureSwitchesAccess.DictionaryFeatureSwitchProvider : NSObject <TFSFeatureSwitchProvider> { // (Swift)
    /* instance variables */
    __C.NSMutableDictionary dict;
}

/* instance methods */
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
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

#endif /* _TtC24TFSFeatureSwitchesAccess31DictionaryFeatureSwitchProvider_h */
