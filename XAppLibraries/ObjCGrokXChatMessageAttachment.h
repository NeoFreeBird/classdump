//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ObjCGrokXChatMessageAttachment_h
#define ObjCGrokXChatMessageAttachment_h
@import Foundation;

#include "ObjCGrokXChatMessageAttachmentFile.h"

@class NSObject, NSURL, UIImage;

@interface ObjCGrokXChatMessageAttachment : NSObject

@property (readonly, nonatomic) ObjCGrokXChatMessageAttachmentFile *file;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSURL *url;

/* instance methods */
- (id)initWithFile:(id)file image:(id)image url:(id)url;

@end

#endif /* ObjCGrokXChatMessageAttachment_h */
