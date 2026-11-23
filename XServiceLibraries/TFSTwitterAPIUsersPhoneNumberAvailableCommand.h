//
#ifndef TFSTwitterAPIUsersPhoneNumberAvailableCommand_h
#define TFSTwitterAPIUsersPhoneNumberAvailableCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIUsersPhoneNumberAvailableCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *rawPhoneNumber;
@property (copy, nonatomic) NSString *countryCode;

/* instance methods */
- (id)initWithContext:(id)context rawPhoneNumber:(id)number countryCode:(id)code responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIUsersPhoneNumberAvailableCommand_h */
