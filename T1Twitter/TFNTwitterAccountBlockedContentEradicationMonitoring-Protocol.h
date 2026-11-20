//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountBlockedContentEradicationMonitoring_Protocol_h
#define TFNTwitterAccountBlockedContentEradicationMonitoring_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterAccountBlockedContentEradicationMonitoring <NSObject>

@required

/* required instance methods */
- (_Bool)shouldStopRemovingBlockedContentForAccount:(id)account;
- (_Bool)shouldStopRemovingBlockedContentAfterFirstPageForAccount:(id)account;
- (void)didRemoveBlockedContentForAccount:(id)account;
- (void)blockedUserContentDidCompleteForAccount:(id)account error:(id)error;

@optional

@end

#endif /* TFNTwitterAccountBlockedContentEradicationMonitoring_Protocol_h */
