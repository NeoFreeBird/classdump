//
#ifndef OCFPermissionPromptSubtask_h
#define OCFPermissionPromptSubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@interface OCFPermissionPromptSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) OCFNavigationLink *grantedLink;
@property (readonly, nonatomic) OCFNavigationLink *previouslyGrantedLink;
@property (readonly, nonatomic) OCFNavigationLink *deniedLink;
@property (readonly, nonatomic) OCFNavigationLink *previouslyDeniedLink;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long previouslyDeniedRepromptBehavior;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFPermissionPromptSubtask_h */
