//
#ifndef OCFAlertDialogSubtask_h
#define OCFAlertDialogSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@interface OCFAlertDialogSubtask : OCFSubtask

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *cancelLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (_Bool)suppressClientEvents;

@end

#endif /* OCFAlertDialogSubtask_h */
