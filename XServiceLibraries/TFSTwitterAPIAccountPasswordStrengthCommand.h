//
#ifndef TFSTwitterAPIAccountPasswordStrengthCommand_h
#define TFSTwitterAPIAccountPasswordStrengthCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIAccountPasswordStrengthCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSString *email;

/* instance methods */
- (id)initWithPassword:(id)password name:(id)name screenName:(id)name email:(id)email context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountPasswordStrengthCommand_h */
