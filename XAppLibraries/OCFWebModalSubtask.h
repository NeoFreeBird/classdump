//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFWebModalSubtask_h
#define OCFWebModalSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSURL;

@interface OCFWebModalSubtask : OCFSubtask

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFNavigationLink *failLink;

/* class methods */
+ (id)typeNames;
+ (id)completionDeepLinkSubtaskDataKey;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFWebModalSubtask_h */
