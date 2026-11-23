//
#ifndef OCFNotificationsPermissionPromptSubtask_h
#define OCFNotificationsPermissionPromptSubtask_h
@import Foundation;

#include "OCFPermissionPromptSubtask.h"

@interface OCFNotificationsPermissionPromptSubtask : OCFPermissionPromptSubtask

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFNotificationsPermissionPromptSubtask_h */
