//
#ifndef TNUHAREntry_h
#define TNUHAREntry_h
@import Foundation;

#include "TNUHARObject.h"
#include "TNUHARRequest.h"
#include "TNUHARResponse.h"
#include "TNUHARTimings.h"

@class NSDate, NSString;

@interface TNUHAREntry : TNUHARObject

@property (nonatomic) long long entryId;
@property (retain, nonatomic) TNUHARRequest *request;
@property (copy, nonatomic) NSString *pageRef;
@property (nonatomic) long long requestId;
@property (retain, nonatomic) TNUHARResponse *response;
@property (copy, nonatomic) NSString *serverIPAddress;
@property (copy, nonatomic) NSString *connection;
@property (retain, nonatomic) NSDate *startedDateTime;
@property (nonatomic) long long time;
@property (retain, nonatomic) TNUHARTimings *timings;
@property (readonly, nonatomic) _Bool inflight;

/* instance methods */
- (id)initWithEntryId:(long long)id;
- (id)init;
- (id)mutableJSONDictionary;
- (_Bool)isInflight;
- (void)updateTimingsIfInflight;

@end

#endif /* TNUHAREntry_h */
