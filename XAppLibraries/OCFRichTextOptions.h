//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
