//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAPICommandContext_h
#define TFNTwitterAPICommandContext_h
@import Foundation;

#include "TFSTwitterAPICommandAccountStateProvider-Protocol.h"
#include "TFSTwitterAPICommandContext-Protocol.h"

@class NSObject, NSString;
@protocol TFSTwitterAPIConfiguration, TFSTwitterLegacyScribeIntegration;

@interface TFNTwitterAPICommandContext : NSObject <TFSTwitterAPICommandContext>

@property (readonly, nonatomic) id <TFSTwitterAPIConfiguration> APIConfiguration;
@property (readonly, nonatomic) _Bool allowPromotedContent;
@property (readonly, nonatomic) id <TFSTwitterAPICommandAccountStateProvider> accountStateProvider;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeIntegration> scribeIntegration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIConfiguration:(id)apiconfiguration scribeIntegration:(id)integration;
- (id)APIConfigurationWithAccountID:(id)id;

@end

#endif /* TFNTwitterAPICommandContext_h */
