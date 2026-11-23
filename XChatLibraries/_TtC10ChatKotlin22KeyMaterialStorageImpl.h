//
#ifndef _TtC10ChatKotlin22KeyMaterialStorageImpl_h
#define _TtC10ChatKotlin22KeyMaterialStorageImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainKeyMaterialStorage-Protocol.h"

@class NSSet, NSString, Subsystem_ios_iosArm64_mainKotlinByteArray, _$s10XUtilities14XKeychainStoreCMn, _TtCs12_SwiftObject;

@interface ChatKotlin.KeyMaterialStorageImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainKeyMaterialStorage> { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.XKeychainStore keychainStore;
}

/* instance methods */
- (void)storeTag:(NSString *)tag bytes:(Subsystem_ios_iosArm64_mainKotlinByteArray *)bytes completionHandler:(id /* block */)handler;
- (void)loadTag:(NSString *)tag completionHandler:(id /* block */)handler;
- (void)deleteTags:(NSSet *)tags completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin22KeyMaterialStorageImpl_h */
