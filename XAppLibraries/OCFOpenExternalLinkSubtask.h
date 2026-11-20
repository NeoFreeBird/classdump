//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
