//
#ifndef OCFRichTextOptions_h
#define OCFRichTextOptions_h
@import Foundation;

#include "OCFSubtaskDataReference.h"

@class NSArray, NSObject;

@interface OCFRichTextOptions : NSObject

@property (readonly, nonatomic) OCFSubtaskDataReference *countSubtaskDataReference;
@property (readonly, nonatomic) NSArray *labelConditionalText;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)init;

@end

#endif /* OCFRichTextOptions_h */
