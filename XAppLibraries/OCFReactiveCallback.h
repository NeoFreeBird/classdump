//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFReactiveCallback_h
#define OCFReactiveCallback_h
@import Foundation;

#include "OCFScribeConfig.h"

@class NSObject, NSString;

@interface OCFReactiveCallback : NSObject

@property (readonly, nonatomic) long long trigger;
@property (readonly, nonatomic) NSString *endpoint;
@property (readonly, nonatomic) OCFScribeConfig *scribeConfig;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFReactiveCallback_h */
