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
