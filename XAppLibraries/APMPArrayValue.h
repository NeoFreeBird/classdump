//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPArrayValue_h
#define APMPArrayValue_h
@import Foundation;

#include "APMPPropertyMap.h"
#include "APMPRuntimeValue.h"

@class NSMutableArray;

@interface APMPArrayValue : APMPRuntimeValue {
    /* instance variables */
    APMPPropertyMap *_propertyMap;
    NSMutableArray *_elements;
    _Bool _mark;
}

/* class methods */
+ (id)emptyValue;

/* instance methods */
- (id)init;
- (id)initWithArray:(id)array;
- (id)stringValueWithSeparator:(id)separator error:(id *)error;
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (void)setLength:(unsigned long long)length;
- (void)setValue:(id)value forProperty:(id)property error:(id *)error;
- (id)valueForProperty:(id)property error:(id *)error;
- (void)removeValueForProperty:(id)property error:(id *)error;
- (long long)count;
- (id)allPropertyNames;
- (_Bool)hasProperty:(id)property error:(id *)error;
- (id)allElements;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)sortUsingFunctionValue:(id)value scope:(id)scope error:(id *)error;
- (id)spliceFrom:(long long)from deleteCount:(long long)count addValues:(id)values;
- (void)concat:(id)concat error:(id *)error;
- (void)reverse;
- (id)removeFirstElement;
- (id)removeLastElement;
- (long long)appendElements:(id)elements;
- (long long)prependElements:(id)elements;
- (long long)indexOfValue:(id)value fromIndex:(long long)index error:(id *)error;
- (long long)lastIndexOfValue:(id)value fromIndex:(long long)index error:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;
- (void)mark;
- (void)sweep;

@end

#endif /* APMPArrayValue_h */
