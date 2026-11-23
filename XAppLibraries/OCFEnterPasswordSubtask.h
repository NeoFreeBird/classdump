//
#ifndef OCFEnterPasswordSubtask_h
#define OCFEnterPasswordSubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFSubtask.h"
#include "OCFTextField.h"
#include "OCFUserIdentifierCollection.h"

@class NSArray;

@interface OCFEnterPasswordSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) OCFUserIdentifierCollection *userIdentifierCollection;
@property (readonly, nonatomic) long long userIdentifierDisplayType;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) _Bool skipPasswordValidation;
@property (readonly, nonatomic) OCFTextField *passwordField;
@property (readonly, nonatomic) OCFTextField *passwordCreationField;
@property (readonly, nonatomic) OCFTextField *passwordConfirmationField;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;
- (_Bool)shouldSkipPasswordValidation;

@end

#endif /* OCFEnterPasswordSubtask_h */
