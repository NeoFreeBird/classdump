//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SocialContextScribeContextHelper_h
#define T1SocialContextScribeContextHelper_h
@import Foundation;

@class NSObject;

@interface T1SocialContextScribeContextHelper : NSObject

/* class methods */
+ (id)scribeContextFromContext:(id)context forStatus:(id)status withScribeComponent:(id)component;
+ (id)socialContextScribeElementWithSocialContext:(id)context defaultElementValue:(id)value;

@end

#endif /* T1SocialContextScribeContextHelper_h */
