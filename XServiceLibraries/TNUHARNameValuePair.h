//
#ifndef TNUHARNameValuePair_h
#define TNUHARNameValuePair_h
@import Foundation;

#include "TNUHARObject.h"

@class NSString;

@interface TNUHARNameValuePair : TNUHARObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;

/* class methods */
+ (id)JSONArrayFromNameValuePairs:(id)pairs;

/* instance methods */
- (id)initWithName:(id)name value:(id)value;
- (id)description;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARNameValuePair_h */
