//
#ifndef OCFUpdateUsersSubtask_h
#define OCFUpdateUsersSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSArray;

@interface OCFUpdateUsersSubtask : OCFSubtask

@property (readonly, nonatomic) NSArray *users;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFUpdateUsersSubtask_h */
