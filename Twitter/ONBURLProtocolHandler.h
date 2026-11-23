//
#ifndef ONBURLProtocolHandler_h
#define ONBURLProtocolHandler_h
@import Foundation;

#include "TFSURLProtocolHandler-Protocol.h"

@class NSObject, NSSet, NSString;

@interface ONBURLProtocolHandler : NSObject <TFSURLProtocolHandler> {
    /* instance variables */
    id /* block */ _actionBlock;
    NSSet *_schemes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActionBlock:(id /* block */)block;
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context;
- (_Bool)protocolRouter:(id)router supportsScheme:(id)scheme;
- (id)schemes;

@end

#endif /* ONBURLProtocolHandler_h */
