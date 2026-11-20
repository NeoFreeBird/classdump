//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBadgedNameBuilder_h
#define TFNBadgedNameBuilder_h
@import Foundation;

@class NSObject;

@interface TFNBadgedNameBuilder : NSObject // (Swift)

/* class methods */
+ (id)attributedNameWithName:(id)name badgeAttachmentStrings:(id)strings attributes:(id)attributes;
+ (id)badgeAttachmentStringWithImage:(id)image font:(id)font;

/* instance methods */
- (id)init;

@end

#endif /* TFNBadgedNameBuilder_h */
