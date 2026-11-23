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
