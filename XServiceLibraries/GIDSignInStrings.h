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
