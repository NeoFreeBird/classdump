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
