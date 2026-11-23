//
#ifndef LHLSNetworkSession_Protocol_h
#define LHLSNetworkSession_Protocol_h
@import Foundation;

#include "LHLSNetworkSessionListener-Protocol.h"
#include "NSObject-Protocol.h"

@protocol LHLSNetworkSession <NSObject>

@required

@property (weak) id <LHLSNetworkSessionListener> listener;

/* required instance methods */
- (void)fetchURL:(id)url token:(id)token;
- (void)cancel:(id)cancel;
- (void)shutdown;

@optional

@end

#endif /* LHLSNetworkSession_Protocol_h */
