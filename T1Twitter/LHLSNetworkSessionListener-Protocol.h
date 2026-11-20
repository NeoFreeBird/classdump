//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNetworkSessionListener_Protocol_h
#define LHLSNetworkSessionListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSNetworkSessionListener <NSObject>

@required

/* required instance methods */
- (void)onResponse:(id)response bytesExpected:(long long)expected;
- (void)onData:(id)data data:(id)data;
- (void)onEndOfStream:(id)stream;
- (void)onError:(id)error error:(id)error;
- (void)onRedirect:(id)redirect url:(id)url;

@optional

/* optional instance methods */
- (void)onErrorCancel:(id)cancel underlyingError:(id)error;

@end

#endif /* LHLSNetworkSessionListener_Protocol_h */
