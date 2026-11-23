//
#ifndef TLPEventStreamConnectionMetadata_h
#define TLPEventStreamConnectionMetadata_h
@import Foundation;

#include "TLPTimeProvider-Protocol.h"

@class NSObject, NSString;

@interface TLPEventStreamConnectionMetadata : NSObject {
    /* instance variables */
    id <TLPTimeProvider> _timeProvider;
}

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double requestStartTime;
@property (readonly, nonatomic) double responseStartTime;
@property (readonly, nonatomic) double firstSystemEventTime;
@property (readonly, nonatomic) double lastSystemEventTime;
@property (readonly, nonatomic) double firstNonSystemEventTime;
@property (readonly, nonatomic) double lastNonSystemEventTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long maxTimeBetweenEventsMs;
@property (readonly, nonatomic) unsigned long long systemEventsReceived;
@property (readonly, nonatomic) unsigned long long nonSystemEventsReceived;
@property (readonly, nonatomic) unsigned long long bytesReceived;

/* instance methods */
- (id)initWithTimeProvider:(id)provider;
- (long long)meanTimeBetweenEventsMs;
- (void)didStart;
- (void)didSendRequest;
- (void)didReceiveResponse;
- (void)didEstablishSession:(id)session;
- (void)didEnd;
- (void)didReadBytes:(unsigned long long)bytes;
- (void)didReceiveSystemEvent;
- (void)didReceiveNonSystemEvent;
- (id)customScribeParametersDictionary;

@end

#endif /* TLPEventStreamConnectionMetadata_h */
