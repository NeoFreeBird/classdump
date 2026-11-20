//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
