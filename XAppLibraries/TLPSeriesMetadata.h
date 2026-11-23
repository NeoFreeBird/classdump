//
#ifndef TLPSeriesMetadata_h
#define TLPSeriesMetadata_h
@import Foundation;

#include "TLPStreamMetadata.h"
#include "TLPTimeProvider-Protocol.h"

@class NSMutableArray;

@interface TLPSeriesMetadata : TLPStreamMetadata {
    /* instance variables */
    id <TLPTimeProvider> _timeProvider;
    TLPStreamMetadata *_currentStreamMetadata;
}

@property (readonly, nonatomic) NSMutableArray *streamMetadataList;

/* instance methods */
- (id)initWithScribeWriter:(id)writer group:(id)group timeProvider:(id)provider;
- (void)didStartStream;
- (void)didFinishStream;
- (void)didStart;
- (void)connectingWithTopicCount:(unsigned long long)count;
- (void)didSendUpdateSubscriptionsRequestWithSubTopics:(unsigned long long)topics unsubTopics:(unsigned long long)topics;
- (void)didSendResubscribeRequestWithTopics:(unsigned long long)topics;
- (void)didFailTopic;
- (void)didDisconnectWithError:(id)error willReconnect:(_Bool)reconnect eventStreamMetadata:(id)metadata;
- (id)customScribeParametersDictionary;
- (id)scribeParameters;
- (void)writeToScribe;

@end

#endif /* TLPSeriesMetadata_h */
