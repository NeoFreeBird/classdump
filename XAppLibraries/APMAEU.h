//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMAEU_h
#define APMAEU_h
@import Foundation;

@class NSObject;

@interface APMAEU : NSObject

/* class methods */
+ (id)appStoreRURL;
+ (_Bool)isFAS;
+ (_Bool)isASRS;
+ (_Bool)isNOD;
+ (id)deviceModel;
+ (id)systemVersion;
+ (_Bool)isAEX;
+ (id)sharedApplication;

@end

#endif /* APMAEU_h */
