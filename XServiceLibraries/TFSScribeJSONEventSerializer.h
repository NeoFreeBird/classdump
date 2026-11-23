//
#ifndef TFSScribeJSONEventSerializer_h
#define TFSScribeJSONEventSerializer_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSScribeEventSerializer-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFSScribeJSONEventSerializer : NSObject <TFSScribeEventSerializer>

@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) id <NSCoding> metadata;

/* class methods */
+ (id)aggregatedJSONDataWithEvents:(id)events reversed:(_Bool)reversed;
+ (id)aggregatedJSONUTF8StringWithEvents:(id)events reversed:(_Bool)reversed;

/* instance methods */
- (id)initWithGroup:(id)group dictionary:(id)dictionary metadata:(id)metadata;
- (id)initWithGroup:(id)group dictionary:(id)dictionary;
- (id)data;
- (id)dictionaryRepresentation;
- (void)setClientEventSequenceStartTimestamp:(long long)timestamp sequenceNumber:(long long)number;
- (_Bool)usesTimestampSequenceNumber;
- (void)setSessionId:(id)id;

@end

#endif /* TFSScribeJSONEventSerializer_h */
