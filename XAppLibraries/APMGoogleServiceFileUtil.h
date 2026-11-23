//
#ifndef APMGoogleServiceFileUtil_h
#define APMGoogleServiceFileUtil_h
@import Foundation;

@class NSObject;

@interface APMGoogleServiceFileUtil : NSObject

/* class methods */
+ (id)dictionaryFromGoogleServiceInfoPlist;
+ (id)googleServiceInfoPlistPath;

@end

#endif /* APMGoogleServiceFileUtil_h */
