//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFUserComponentData_h
#define OCFUserComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@class TFSTwitterUser;

@interface OCFUserComponentData : OCFComponentData

@property (readonly, nonatomic) TFSTwitterUser *user;
@property (readonly, nonatomic) OCFRichText *caption;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithUser:(id)user caption:(id)caption;

@end

#endif /* OCFUserComponentData_h */
