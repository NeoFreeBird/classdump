//
#ifndef OCFCheckLoggedInAccountSubtask_h
#define OCFCheckLoggedInAccountSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@interface OCFCheckLoggedInAccountSubtask : OCFSubtask

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) OCFNavigationLink *trueLink;
@property (readonly, nonatomic) OCFNavigationLink *falseLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFCheckLoggedInAccountSubtask_h */
