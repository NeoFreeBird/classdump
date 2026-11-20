//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTweetComponentData_h
#define OCFTweetComponentData_h
@import Foundation;

#include "OCFComponentData.h"

@class TFSTwitterStatusBundle;

@interface OCFTweetComponentData : OCFComponentData

@property (readonly, nonatomic) TFSTwitterStatusBundle *status;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFTweetComponentData_h */
