//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFUtils_h
#define TAFUtils_h
@import Foundation;

@class NSObject;

@interface TAFUtils : NSObject // (Swift)

/* class methods */
+ (id)whyAmISeeingThisAdURLStringFor:(id)_for gwtaURL:(id)url isQuickPromote:(_Bool)promote;
+ (id)addBatteryInfoFrom:(Class)from toScribeParameters:(id)parameters;
+ (id)addStorageInfoFrom:(Class)from toScribeParameters:(id)parameters;

/* instance methods */
- (id)init;

@end

#endif /* TAFUtils_h */
