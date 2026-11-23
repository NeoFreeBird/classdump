//
#ifndef TFSTwitterAPIHelpSettingsCommand_h
#define TFSTwitterAPIHelpSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIHelpSettingsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *settingsVersion;
@property (copy, nonatomic) NSString *featureSetToken;

/* instance methods */
- (id)initWithAccountID:(id)id settingsVersion:(id)version featureSetToken:(id)token context:(id)context responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIHelpSettingsCommand_h */
