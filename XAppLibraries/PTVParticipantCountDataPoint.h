//
#ifndef PTVParticipantCountDataPoint_h
#define PTVParticipantCountDataPoint_h
@import Foundation;

@class NSObject;

@interface PTVParticipantCountDataPoint : NSObject

@property (readonly, nonatomic) double participantCount;
@property (readonly, nonatomic) double timeIntoBroadcast;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithParticipantCount:(double)count timeIntoBroadcast:(double)broadcast;
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryForStoring;

@end

#endif /* PTVParticipantCountDataPoint_h */
