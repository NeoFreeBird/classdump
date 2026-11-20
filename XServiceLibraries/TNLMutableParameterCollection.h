//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLMutableParameterCollection_h
#define TNLMutableParameterCollection_h
@import Foundation;

#include "TNLParameterCollection.h"

@interface TNLMutableParameterCollection : TNLParameterCollection

/* instance methods */
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)initWithURLEncodedString:(id)string options:(long long)options;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithURL:(id)url parsingParameterTypes:(long long)types options:(long long)options;
- (id)initWithParameterCollection:(id)collection;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addParametersWithURLEncodedString:(id)string;
- (void)addParametersWithURLEncodedString:(id)string options:(long long)options;
- (void)addParametersFromURL:(id)url parsingParameterTypes:(long long)types;
- (void)addParametersFromURL:(id)url parsingParameterTypes:(long long)types options:(long long)options;
- (void)addParametersDirectlyFromDictionary:(id)dictionary combineRepeatingKeys:(_Bool)keys;
- (void)addParametersFromDictionary:(id)dictionary withFormattingMode:(long long)mode combineRepeatingKeys:(_Bool)keys forKey:(id)key;
- (void)addParametersFromParameterCollection:(id)collection combineRepeatingKeys:(_Bool)keys;
- (void)addParametersFromParameterCollection:(id)collection;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)setParameterValue:(id)value forKey:(id)key;
- (void)removeAllParameters;

@end

#endif /* TNLMutableParameterCollection_h */
