//
#ifndef _TtC40TwitterClientEventServicesImplementation31DynamicContainerEventSerializer_h
#define _TtC40TwitterClientEventServicesImplementation31DynamicContainerEventSerializer_h
@import Foundation;

#include "TFSScribeEventSerializer-Protocol.h"

@class TwitterApacheThrift.ThriftEncoder, TwitterClientEventServicesImplementation.EventEnvelope, _$sSS, _TtCs12_SwiftObject;

@interface TwitterClientEventServicesImplementation.DynamicContainerEventSerializer : Swift._SwiftObject <TFSScribeEventSerializer> { // (Swift)
    /* instance variables */
    TwitterApacheThrift.ThriftEncoder thriftEncoder;
    TwitterClientEventServicesImplementation.EventEnvelope event;
    Swift.String eventGroup;
}

/* instance methods */
- (id)data;
- (id)dictionaryRepresentation;
- (id)group;
- (_Bool)usesTimestampSequenceNumber;
- (void)setClientEventSequenceStartTimestamp:(long long)timestamp sequenceNumber:(long long)number;
- (void)setSessionId:(id)id;
- (id)metadata;

@end

#endif /* _TtC40TwitterClientEventServicesImplementation31DynamicContainerEventSerializer_h */
