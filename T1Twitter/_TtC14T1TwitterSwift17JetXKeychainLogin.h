//
#ifndef _TtC14T1TwitterSwift17JetXKeychainLogin_h
#define _TtC14T1TwitterSwift17JetXKeychainLogin_h
@import Foundation;

@class NSObject, T1TwitterSwift.JetXKeychainLogin.AtomIDsToUpdate ?, T1TwitterSwift.JetXRuntime, _$sSDySSyyYaKcGSg, _$sSS, _$sSSSg;

@interface T1TwitterSwift.JetXKeychainLogin : NSObject { // (Swift)
    /* instance variables */
    Swift.String kNextComponentHome;
    Swift.String kNextComponentStarterPack;
    Swift.String kNextComponentStarterPacks;
    Swift.String kNextComponentStarterPacksV2;
    T1TwitterSwift.JetXRuntime runtime;
    T1TwitterSwift.JetXKeychainLogin.AtomIDsToUpdate ? atomIDsToUpdate;
    Swift.String? sessionToken;
    Swift.String? userId;
    [Swift.String : () async throws -> ()]? $__lazy_storage_$_nextComponentActions;
}

/* instance methods */
- (id)initWithObjcRuntime:(id)runtime;
- (void)attemptLogin;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift17JetXKeychainLogin_h */
