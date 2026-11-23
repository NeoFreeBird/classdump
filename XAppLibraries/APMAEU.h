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
