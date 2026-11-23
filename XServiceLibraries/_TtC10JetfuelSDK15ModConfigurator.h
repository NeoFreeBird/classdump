//
#ifndef _TtC10JetfuelSDK15ModConfigurator_h
#define _TtC10JetfuelSDK15ModConfigurator_h
@import Foundation;

@class JetfuelSDK.LRUCache JetfuelSDK.ModInputs JetfuelSDK.ModConfig, _$sSDySi -> JetfuelSDK.ModConfig _$sz_ JetfuelSDK.ModInputs _$stYbc, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface JetfuelSDK.ModConfigurator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.LRUCache JetfuelSDK.ModInputs JetfuelSDK.ModConfig cache;
    Swift.Dictionary empty-list Swift.Int -> JetfuelSDK.ModConfig _$sz_ JetfuelSDK.ModInputs _$stYbc configs;
    Swift.Dictionary empty-list Swift.Int -> JetfuelSDK.ModConfig _$sz_ JetfuelSDK.ModInputs _$stYbc literalConfigs;
    __C.NSLock literalsLock;
}

@end

#endif /* _TtC10JetfuelSDK15ModConfigurator_h */
