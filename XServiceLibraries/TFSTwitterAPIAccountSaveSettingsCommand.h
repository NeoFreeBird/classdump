//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountSaveSettingsCommand_h
#define TFSTwitterAPIAccountSaveSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPIAccountSaveSettingsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, nonatomic) NSDictionary *settings;

/* instance methods */
- (id)initWithAccountID:(id)id settings:(id)settings context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountSaveSettingsCommand_h */
