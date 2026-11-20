//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIConConBundleCommand_h
#define TFSTwitterAPIConConBundleCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIConConBundleCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, nonatomic) NSString *bundleID;

/* instance methods */
- (id)initWithBundleID:(id)id accountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIConConBundleCommand_h */
