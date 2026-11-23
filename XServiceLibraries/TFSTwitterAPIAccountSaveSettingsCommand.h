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
