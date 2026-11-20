//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
