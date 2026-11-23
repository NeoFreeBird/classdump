//
#ifndef GULKeychainUtils_h
#define GULKeychainUtils_h
@import Foundation;

@class NSObject;

@interface GULKeychainUtils : NSObject

/* class methods */
+ (id)getItemWithQuery:(id)query error:(id *)error;
+ (_Bool)setItem:(id)item withQuery:(id)query error:(id *)error;
+ (_Bool)removeItemWithQuery:(id)query error:(id *)error;
+ (id)multiplatformQueryWithQuery:(id)query;
+ (id)keychainErrorWithFunction:(id)function status:(int)status;

@end

#endif /* GULKeychainUtils_h */
