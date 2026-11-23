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
