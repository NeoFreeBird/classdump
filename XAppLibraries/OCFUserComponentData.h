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
