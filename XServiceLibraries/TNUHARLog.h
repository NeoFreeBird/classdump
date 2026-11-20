//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARLog_h
#define TNUHARLog_h
@import Foundation;

#include "TFSCircularFIFOBuffer.h"
#include "TNUHARCreator.h"
#include "TNUHARObject.h"

@class NSDate, NSString;

@interface TNUHARLog : TNUHARObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TFSCircularFIFOBuffer *entries;
@property (nonatomic) unsigned long long maxNumberOfEntries;
@property (readonly, copy, nonatomic) NSString *version;
@property (retain, nonatomic) TNUHARCreator *creator;
@property (retain, nonatomic) NSDate *startedDateTime;
@property (retain, nonatomic) NSDate *interactiveDateTime;
@property (retain, nonatomic) NSDate *loadedDateTime;

/* class methods */
+ (id)rootJSONDictionaryWithHARLog:(id)harlog;

/* instance methods */
- (id)initWithMaxNumberOfEntries:(unsigned long long)entries name:(id)name entryBufferDelegate:(id)delegate;
- (id)init;
- (void)removeAllEntries;
- (void)addEntry:(id)entry;
- (void)updateTimingsOfInflightEntries;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARLog_h */
