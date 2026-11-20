//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFEndFlowSubtask_h
#define OCFEndFlowSubtask_h
@import Foundation;

#include "OCFSubtask.h"

@interface OCFEndFlowSubtask : OCFSubtask

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFEndFlowSubtask_h */
