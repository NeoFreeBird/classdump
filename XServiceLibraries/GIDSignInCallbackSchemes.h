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
