//
#ifndef TFSFeatureSwitchesParameter_h
#define TFSFeatureSwitchesParameter_h
@import Foundation;

#include "TFSFeatureSwitchesValue.h"

@class NSArray, NSObject, NSString;

@interface TFSFeatureSwitchesParameter : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) TFSFeatureSwitchesValue *defaultValue;
@property (readonly, nonatomic) NSArray *enumerationValues;

/* class methods */
+ (id)parameterWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithName:(id)name defaultValue:(id)value enumerationValues:(id)values;

@end

#endif /* TFSFeatureSwitchesParameter_h */
