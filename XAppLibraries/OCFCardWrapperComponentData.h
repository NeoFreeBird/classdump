//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFCardWrapperComponentData_h
#define OCFCardWrapperComponentData_h
@import Foundation;

#include "OCFComponentData.h"

@class NSArray;

@interface OCFCardWrapperComponentData : OCFComponentData

@property (readonly, nonatomic) NSArray *components;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFCardWrapperComponentData_h */
