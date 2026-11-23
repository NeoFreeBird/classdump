//
#ifndef OCFPhoneVerificationSubtask_h
#define OCFPhoneVerificationSubtask_h
@import Foundation;

#include "OCFIdentityVerificationSubtask.h"
#include "OCFSubtaskDataReference.h"

@class NSString;

@interface OCFPhoneVerificationSubtask : OCFIdentityVerificationSubtask

@property (readonly, nonatomic) NSString *phoneNumberString;
@property (readonly, nonatomic) OCFSubtaskDataReference *phoneNumberSubtaskDataReference;
@property (readonly, nonatomic) NSString *countryCodeString;
@property (readonly, nonatomic) OCFSubtaskDataReference *countryCodeSubtaskDataReference;
@property (readonly, nonatomic) _Bool sendViaVoice;

/* class methods */
+ (id)typeNames;
+ (id)resendSMSNavigationContextAction;
+ (id)resendVoiceNavigationContextAction;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFPhoneVerificationSubtask_h */
