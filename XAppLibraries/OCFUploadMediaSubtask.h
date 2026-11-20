//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFUploadMediaSubtask_h
#define OCFUploadMediaSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSArray;

@interface OCFUploadMediaSubtask : OCFSubtask

@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFUploadMediaSubtask_h */
