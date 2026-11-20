//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterBadgeViolationResponse_h
#define TFSTwitterBadgeViolationResponse_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterBadgeViolationResponse : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) TFSURTRichText *descriptionRichText;
@property (copy, nonatomic) NSString *descriptionURL;
@property (retain, nonatomic) NSArray *violations;

/* instance methods */
- (id)initWithTitle:(id)title descriptionRichText:(id)text descriptionURL:(id)url violations:(id)violations;

@end

#endif /* TFSTwitterBadgeViolationResponse_h */
