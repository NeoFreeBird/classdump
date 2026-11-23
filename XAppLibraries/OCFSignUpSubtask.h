//
#ifndef OCFSignUpSubtask_h
#define OCFSignUpSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFSignUpSubtask : OCFSubtask

@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) NSString *nameHint;
@property (readonly, nonatomic) NSString *phoneHint;
@property (readonly, nonatomic) NSString *emailHint;
@property (readonly, nonatomic) NSString *phoneOrEmailHint;
@property (readonly, nonatomic) NSString *birthdayHint;
@property (readonly, nonatomic) NSString *usePhoneText;
@property (readonly, nonatomic) NSString *useEmailText;
@property (readonly, nonatomic) _Bool shouldIgnoreBirthday;
@property (readonly, nonatomic) NSString *birthdayExplanation;
@property (readonly, nonatomic) NSString *jsInstrumentationURL;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *emailNextLink;
@property (readonly, nonatomic) _Bool useDevicePrefill;
@property (readonly, nonatomic) unsigned long long allowedIdentifiers;

/* class methods */
+ (id)typeNames;
+ (id)selectNameNavigationContextAction;
+ (id)selectPhoneNavigationContextAction;
+ (id)selectEmailNavigationContextAction;
+ (id)selectBirthdayNavigationContextAction;
+ (id)clearNavigationContextAction;
+ (id)clearPhoneNavigationContextAction;
+ (id)nameSubtaskDataKey;
+ (id)phoneSubtaskDataKey;
+ (id)countryCodeSubtaskDataKey;
+ (id)emailSubtaskDataKey;
+ (id)birthdaySubtaskDataKey;
+ (id)nameHintSubtaskDataKey;
+ (id)phoneHintSubtaskDataKey;
+ (id)emailHintSubtaskDataKey;
+ (id)birthdayHintSubtaskDataKey;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFSignUpSubtask_h */
