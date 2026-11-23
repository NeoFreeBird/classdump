//
#ifndef TNUHTTPContentDecoderContext_h
#define TNUHTTPContentDecoderContext_h
@import Foundation;

#include "NOZDecoderContext-Protocol.h"
#include "TNLContentDecoderClient-Protocol.h"
#include "TNLContentDecoderContext-Protocol.h"

@class NSError, NSObject, NSString;

@interface TNUHTTPContentDecoderContext : NSObject <TNLContentDecoderContext> {
    /* instance variables */
    id <TNLContentDecoderClient> _client;
}

@property (retain, nonatomic) id <NOZDecoderContext> context;
@property (retain, nonatomic) NSError *contextualError;
@property (readonly, nonatomic) id <TNLContentDecoderClient> tnl_decoderClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithClient:(id)client;

@end

#endif /* TNUHTTPContentDecoderContext_h */
