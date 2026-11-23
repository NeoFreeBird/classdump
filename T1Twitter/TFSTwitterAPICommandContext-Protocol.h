//
#ifndef TFSTwitterAPICommandContext_Protocol_h
#define TFSTwitterAPICommandContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeIntegration-Protocol.h"

@protocol TFSTwitterAPICommandAccountStateProvider;

@protocol TFSTwitterAPICommandContext <NSObject>

@required

@property (nonatomic, readonly) _Bool allowPromotedContent;
@property (nonatomic, readonly) id <TFSTwitterAPICommandAccountStateProvider> accountStateProvider;
@property (nonatomic, readonly) id <TFSTwitterLegacyScribeIntegration> scribeIntegration;

/* required instance methods */
- (id)APIConfigurationWithAccountID:(id)id;
- (id)APIConfigurationWithAccountID:(id)id;

@optional

@end

#endif /* TFSTwitterAPICommandContext_Protocol_h */
