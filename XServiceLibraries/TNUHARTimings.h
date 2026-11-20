//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARTimings_h
#define TNUHARTimings_h
@import Foundation;

#include "TNUHARObject.h"

@interface TNUHARTimings : TNUHARObject

@property (nonatomic) long long blocked;
@property (nonatomic) long long dns;
@property (nonatomic) long long connect;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) long long ssl;

/* instance methods */
- (id)mutableJSONDictionary;
- (void)setAllValuesToUnknown;
- (_Bool)hasAnyRequiredValue;
- (long long)summedDuration;

@end

#endif /* TNUHARTimings_h */
