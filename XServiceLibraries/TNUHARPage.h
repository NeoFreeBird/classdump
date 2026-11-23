//
#ifndef TNUHARPage_h
#define TNUHARPage_h
@import Foundation;

#include "TNUHARObject.h"

@class NSDate, NSString;

@interface TNUHARPage : TNUHARObject

@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startedDateTime;
@property (nonatomic) long long onContentLoad;
@property (nonatomic) long long onLoad;

/* instance methods */
- (id)init;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARPage_h */
