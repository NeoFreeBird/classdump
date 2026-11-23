//
#ifndef OCFOpenExternalLinkSubtask_h
#define OCFOpenExternalLinkSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSURL;

@interface OCFOpenExternalLinkSubtask : OCFSubtask

@property (readonly, nonatomic) NSURL *externalLinkUrl;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *failLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFOpenExternalLinkSubtask_h */
