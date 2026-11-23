//
#ifndef OCFChoiceValue_h
#define OCFChoiceValue_h
@import Foundation;

#include "OCFRichText.h"

@class NSObject, NSString;

@interface OCFChoiceValue : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) OCFRichText *text;
@property (readonly, nonatomic) OCFRichText *subtext;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFChoiceValue_h */
