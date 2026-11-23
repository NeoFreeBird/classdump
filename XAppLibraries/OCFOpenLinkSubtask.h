//
#ifndef OCFOpenLinkSubtask_h
#define OCFOpenLinkSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFOpenLinkSubtask : OCFSubtask

@property (readonly, nonatomic) OCFNavigationLink *link;
@property (readonly, nonatomic) NSString *onboardingCallbackPath;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFOpenLinkSubtask_h */
