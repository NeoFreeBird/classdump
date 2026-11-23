//
#ifndef TFSTwitterAPICommandScribeProviderInternal_h
#define TFSTwitterAPICommandScribeProviderInternal_h
@import Foundation;

#include "TFSTwitterAPICommandScribeProvider-Protocol.h"
#include "TFSTwitterLegacyScribeIntegration.h"

@class NSObject, NSString;

@interface TFSTwitterAPICommandScribeProviderInternal : NSObject <TFSTwitterAPICommandScribeProvider>

@property (readonly, nonatomic) TFSTwitterLegacyScribeIntegration *scribeIntegration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribeIntegration:(id)integration;
- (id)accountScribeForCommand:(id)command;
- (id)guestScribeForCommand:(id)command;

@end

#endif /* TFSTwitterAPICommandScribeProviderInternal_h */
