//
#ifndef T1UserAgentProvider_h
#define T1UserAgentProvider_h
@import Foundation;

#include "TFSTwitterScribeSystemClientProvider-Protocol.h"
#include "TFSTwitterUserAgentProvider-Protocol.h"

@class NSString, TFSTwitterAPIUserAgentProvider;

@interface T1UserAgentProvider : TFSTwitterAPIUserAgentProvider <TFSTwitterUserAgentProvider, TFSTwitterScribeSystemClientProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *scribeClientName;

@end

#endif /* T1UserAgentProvider_h */
