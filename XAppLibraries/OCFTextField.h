//
#ifndef OCFTextField_h
#define OCFTextField_h
@import Foundation;

#include "OCFRichText.h"

@class NSArray, NSObject, NSString;

@interface OCFTextField : NSObject

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSString *hintText;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) NSArray *validationMessages;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithContentType:(long long)type hintText:(id)text detailText:(id)text validationMessages:(id)messages;

@end

#endif /* OCFTextField_h */
