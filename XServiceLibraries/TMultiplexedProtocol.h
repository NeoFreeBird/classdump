//
#ifndef TMultiplexedProtocol_h
#define TMultiplexedProtocol_h
@import Foundation;

#include "TProtocolDecorator.h"

@class NSString;

@interface TMultiplexedProtocol : TProtocolDecorator {
    /* instance variables */
    NSString *mServiceName;
}

/* instance methods */
- (id)initWithProtocol:(id)protocol serviceName:(id)name;
- (void)writeMessageBeginWithName:(id)name type:(int)type sequenceID:(int)id;
- (void)dealloc;

@end

#endif /* TMultiplexedProtocol_h */
