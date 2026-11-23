//
#ifndef TNUHARPostData_h
#define TNUHARPostData_h
@import Foundation;

#include "TNUHARObject.h"

@class NSString;

@interface TNUHARPostData : TNUHARObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARPostData_h */
