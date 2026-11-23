//
#ifndef TFSTwitterMomentSportEventUpdate_h
#define TFSTwitterMomentSportEventUpdate_h
@import Foundation;

#include "TFSTwitterMomentSportEventParticipant.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterMomentSportEventUpdate : NSObject

@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *progressNotes;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) TFSTwitterMomentSportEventParticipant *winnerParticipant;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) long long timestamp;

/* class methods */
+ (long long)statusWithString:(id)string;

/* instance methods */
- (id)initWithEventID:(id)id participants:(id)participants progressNotes:(id)notes status:(long long)status winnerParticipant:(id)participant timeToLive:(double)live timestamp:(long long)timestamp;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqualToMomentSportEventUpdate:(id)update;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFSTwitterMomentSportEventUpdate_h */
