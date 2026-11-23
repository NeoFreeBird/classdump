//
#ifndef OCFToggleWrapperComponentContent_h
#define OCFToggleWrapperComponentContent_h
@import Foundation;

#include "OCFRichText.h"

@class NSArray, NSObject;

@interface OCFToggleWrapperComponentContent : NSObject

@property (readonly, nonatomic) OCFRichText *actionText;
@property (readonly, nonatomic) NSArray *components;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFToggleWrapperComponentContent_h */
