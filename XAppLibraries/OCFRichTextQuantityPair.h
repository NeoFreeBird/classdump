//
#ifndef OCFRichTextQuantityPair_h
#define OCFRichTextQuantityPair_h
@import Foundation;

#include "OCFRichText.h"

@class NSObject;

@interface OCFRichTextQuantityPair : NSObject

@property (readonly, nonatomic) OCFRichText *text;
@property (readonly, nonatomic) long long threshold;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFRichTextQuantityPair_h */
