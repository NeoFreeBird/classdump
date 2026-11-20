//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFAttestationSubtask_h
#define OCFAttestationSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@interface OCFAttestationSubtask : OCFSubtask

@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFAttestationSubtask_h */
