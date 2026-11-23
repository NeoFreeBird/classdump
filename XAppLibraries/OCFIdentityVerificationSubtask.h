//
#ifndef OCFIdentityVerificationSubtask_h
#define OCFIdentityVerificationSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFIdentityVerificationSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) NSString *hintText;
@property (readonly, nonatomic) long long codeLength;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *failLink;
@property (readonly, nonatomic) OCFNavigationLink *cancelLink;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFIdentityVerificationSubtask_h */
