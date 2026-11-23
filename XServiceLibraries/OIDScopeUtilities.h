//
#ifndef OIDScopeUtilities_h
#define OIDScopeUtilities_h
@import Foundation;

@class NSObject;

@interface OIDScopeUtilities : NSObject

/* class methods */
+ (id)disallowedScopeCharacters;
+ (id)scopesWithArray:(id)array;
+ (id)scopesArrayWithString:(id)string;

@end

#endif /* OIDScopeUtilities_h */
