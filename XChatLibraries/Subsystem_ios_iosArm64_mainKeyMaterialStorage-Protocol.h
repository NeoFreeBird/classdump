//
#ifndef Subsystem_ios_iosArm64_mainKeyMaterialStorage_Protocol_h
#define Subsystem_ios_iosArm64_mainKeyMaterialStorage_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainKeyMaterialStorage

@required

/* required instance methods */
- (void)deleteTags:(id)tags completionHandler:(id /* block */)handler;
- (void)deleteTags:(id)tags completionHandler:(id /* block */)handler;
- (void)loadTag:(id)tag completionHandler:(id /* block */)handler;
- (void)loadTag:(id)tag completionHandler:(id /* block */)handler;
- (void)storeTag:(id)tag bytes:(id)bytes completionHandler:(id /* block */)handler;
- (void)storeTag:(id)tag bytes:(id)bytes completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainKeyMaterialStorage_Protocol_h */
