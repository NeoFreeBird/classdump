//
#ifndef TFSTwitterBadgeViolation_h
#define TFSTwitterBadgeViolation_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSObject, NSString;

@interface TFSTwitterBadgeViolation : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) TFSURTRichText *descriptionRichText;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSString *descriptionURL;

/* instance methods */
- (id)initWithTitle:(id)title descriptionRichText:(id)text descriptionURL:(id)url category:(unsigned long long)category status:(unsigned long long)status;

@end

#endif /* TFSTwitterBadgeViolation_h */
