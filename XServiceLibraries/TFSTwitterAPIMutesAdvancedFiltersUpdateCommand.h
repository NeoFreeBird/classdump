//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMutesAdvancedFiltersUpdateCommand_h
#define TFSTwitterAPIMutesAdvancedFiltersUpdateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPIMutesAdvancedFiltersUpdateCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) NSDictionary *advancedFilters;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id advancedFilters:(id)filters responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesAdvancedFiltersUpdateCommand_h */
