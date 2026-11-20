//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMutesAdvancedFiltersCommand_h
#define TFSTwitterAPIMutesAdvancedFiltersCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIMutesAdvancedFiltersCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesAdvancedFiltersCommand_h */
