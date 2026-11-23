//
#ifndef OCFMenuDialogSubtask_h
#define OCFMenuDialogSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSArray;

@interface OCFMenuDialogSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) NSArray *primaryActionLinks;
@property (readonly, nonatomic) OCFNavigationLink *cancelLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFMenuDialogSubtask_h */
