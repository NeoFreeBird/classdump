//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDSignInCallbackSchemes_h
#define GIDSignInCallbackSchemes_h
@import Foundation;

@class NSObject, NSString;

@interface GIDSignInCallbackSchemes : NSObject {
    /* instance variables */
    NSString *_clientIdentifier;
}

/* class methods */
+ (id)relevantURLSchemes;

/* instance methods */
- (id)initWithClientIdentifier:(id)identifier;
- (id)clientIdentifierScheme;
- (id)allSchemes;
- (id)unsupportedSchemes;
- (_Bool)URLSchemeIsCallbackScheme:(id)scheme;

@end

#endif /* GIDSignInCallbackSchemes_h */
