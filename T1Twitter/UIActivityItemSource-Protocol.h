//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIActivityItemSource_Protocol_h
#define UIActivityItemSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIActivityItemSource <NSObject>

@required

/* required instance methods */
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;

@optional

/* optional instance methods */
- (id)activityViewController:(id)controller subjectForActivityType:(id)type;
- (id)activityViewController:(id)controller dataTypeIdentifierForActivityType:(id)type;
- (id)activityViewController:(id)controller thumbnailImageForActivityType:(id)type suggestedSize:(struct CGSize { double x0; double x1; })size;
- (id)activityViewControllerLinkMetadata:(id)metadata;
- (id)activityViewControllerShareRecipients:(id)recipients;

@end

#endif /* UIActivityItemSource_Protocol_h */
