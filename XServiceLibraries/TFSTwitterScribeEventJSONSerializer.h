//
#ifndef TFSTwitterScribeEventJSONSerializer_h
#define TFSTwitterScribeEventJSONSerializer_h
@import Foundation;

#include "TFSScribeEventSerializer-Protocol.h"

@class NSObject;

@interface TFSTwitterScribeEventJSONSerializer : NSObject <TFSScribeEventSerializer> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 _group;
    B24@0:8@"NSString"16 _metadata;
    B24@0:8@"NSString"16 parameters;
}

/* instance methods */
- (id)initWithGroup:(id)group parameters:(id)parameters metadata:(id)metadata;
- (id)group;
- (id)metadata;
- (id)data;
- (id)dictionaryRepresentation;
- (_Bool)usesTimestampSequenceNumber;
- (void)setClientEventSequenceStartTimestamp:(long long)timestamp sequenceNumber:(long long)number;
- (void)setSessionId:(id)id;
- (id)init;

@end

#endif /* TFSTwitterScribeEventJSONSerializer_h */
