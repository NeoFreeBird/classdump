//
#ifndef OCFHeader_h
#define OCFHeader_h
@import Foundation;

#include "OCFHeaderImage.h"
#include "OCFRichText.h"

@class NSObject, TFSTwitterUser;

@interface OCFHeader : NSObject

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFHeaderImage *headerImage;
@property (readonly, nonatomic) TFSTwitterUser *user;
@property (readonly, nonatomic) OCFRichText *userCaption;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithPrimaryText:(id)text secondaryText:(id)text headerImage:(id)image user:(id)user userCaption:(id)caption;

@end

#endif /* OCFHeader_h */
