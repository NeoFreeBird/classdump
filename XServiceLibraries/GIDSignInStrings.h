//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDSignInStrings_h
#define GIDSignInStrings_h
@import Foundation;

@class NSObject;

@interface GIDSignInStrings : NSObject

/* class methods */
+ (id)localizedStringForKey:(id)key text:(id)text;
+ (id)signInString;
+ (id)signInWithGoogleString;

@end

#endif /* GIDSignInStrings_h */
