//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSTextAttachment_TFNHashflag_h
#define NSTextAttachment_TFNHashflag_h
@import Foundation;

@class NSArray, NSObject, NSString, NSURL;

@interface NSTextAttachment (TFNHashflag)

/* class methods */
+ (id)textAttachmentWithHashflagImage:(id)image font:(id)font;

@end

#endif /* NSTextAttachment_TFNHashflag_h */
