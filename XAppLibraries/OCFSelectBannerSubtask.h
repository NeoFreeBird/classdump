//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSelectBannerSubtask_h
#define OCFSelectBannerSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"
#include "OCFSubtaskDataReference.h"

@interface OCFSelectBannerSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFSubtaskDataReference *avatarImageSubtaskDataReference;

/* class methods */
+ (id)typeNames;
+ (long long)version;
+ (id)selectedBannerSubtaskDataKey;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFSelectBannerSubtask_h */
