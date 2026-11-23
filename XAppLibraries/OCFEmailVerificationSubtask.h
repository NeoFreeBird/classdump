//
#ifndef OCFEmailVerificationSubtask_h
#define OCFEmailVerificationSubtask_h
@import Foundation;

#include "OCFIdentityVerificationSubtask.h"
#include "OCFSubtaskDataReference.h"

@class NSString;

@interface OCFEmailVerificationSubtask : OCFIdentityVerificationSubtask

@property (readonly, nonatomic) NSString *emailString;
@property (readonly, nonatomic) OCFSubtaskDataReference *emailSubtaskDataReference;
@property (readonly, nonatomic) NSString *nameString;
@property (readonly, nonatomic) OCFSubtaskDataReference *nameSubtaskDataReference;
@property (readonly, nonatomic) _Bool verificationStatusPollingEnabled;

/* class methods */
+ (id)typeNames;
+ (long long)version;
+ (id)resendEmailNavigationContextAction;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFEmailVerificationSubtask_h */
