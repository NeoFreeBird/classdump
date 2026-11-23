//
#ifndef TFNTwitterAPIBasicHeaderProvider_h
#define TFNTwitterAPIBasicHeaderProvider_h
@import Foundation;

#include "TFNTwitterAPIHeaderProvider-Protocol.h"

@class AttestationTokenProvider, NSObject, NSString;
@protocol TFSTwitterUserAgentProvider;

@interface TFNTwitterAPIBasicHeaderProvider : NSObject <TFNTwitterAPIHeaderProvider>

@property (readonly, nonatomic) id <TFSTwitterUserAgentProvider> userAgentProvider;
@property (readonly, nonatomic) AttestationTokenProvider *attestTokenProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserAgentProvider:(id)provider;
- (id)initWithUserAgentProvider:(id)provider attestTokenProvider:(id)provider;
- (id)init;
- (id)tnl_allDefaultHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;
- (id)_tfn_cachedAdvertisingInformationIfAvailable;
- (id)_tfn_platform;
- (id)_tfn_clientVersion;
- (id)_tfn_userAgent;

@end

#endif /* TFNTwitterAPIBasicHeaderProvider_h */
