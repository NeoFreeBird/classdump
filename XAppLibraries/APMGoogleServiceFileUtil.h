//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
