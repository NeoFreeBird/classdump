//
#ifndef TFSScribeEventSerializer_Protocol_h
#define TFSScribeEventSerializer_Protocol_h
@import Foundation;

@protocol TFSScribeEventSerializer

@required

/* required instance methods */
- (id)data;
- (id)dictionaryRepresentation;
- (id)group;
- (_Bool)usesTimestampSequenceNumber;
- (void)setClientEventSequenceStartTimestamp:(long long)timestamp sequenceNumber:(long long)number;
- (void)setSessionId:(id)id;
- (id)metadata;

@optional

@end

#endif /* TFSScribeEventSerializer_Protocol_h */
