//
#ifndef OCFPrivacyOptionsSubtask_h
#define OCFPrivacyOptionsSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFPrivacyOptionsSubtask : OCFSubtask

@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) _Bool discoverableByEmail;
@property (readonly, nonatomic) NSString *discoverableByEmailLabel;
@property (readonly, nonatomic) OCFRichText *discoverableByEmailDetailText;
@property (readonly, nonatomic) _Bool discoverableByPhone;
@property (readonly, nonatomic) NSString *discoverableByPhoneLabel;
@property (readonly, nonatomic) OCFRichText *discoverableByPhoneDetailText;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFPrivacyOptionsSubtask_h */
