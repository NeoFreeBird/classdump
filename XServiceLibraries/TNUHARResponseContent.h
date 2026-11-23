//
#ifndef TNUHARResponseContent_h
#define TNUHARResponseContent_h
@import Foundation;

#include "TNUHARObject.h"

@class NSString;

@interface TNUHARResponseContent : TNUHARObject

@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *encoding;
@property (nonatomic) long long compression;

/* instance methods */
- (id)init;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARResponseContent_h */
