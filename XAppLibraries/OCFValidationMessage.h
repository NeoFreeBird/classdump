//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFValidationMessage_h
#define OCFValidationMessage_h
@import Foundation;

#include "OCFRichText.h"

@class NSObject;

@interface OCFValidationMessage : NSObject

@property (readonly, nonatomic) OCFRichText *text;
@property (readonly, nonatomic) long long contentType;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithText:(id)text contentType:(long long)type;

@end

#endif /* OCFValidationMessage_h */
