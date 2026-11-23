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
