//
#ifndef _TtC10JetfuelSDK16ComponentManager_h
#define _TtC10JetfuelSDK16ComponentManager_h
@import Foundation;

@class JetfuelSDK.AnimationCoordinator ?, JetfuelSDK.FormStateManager, JetfuelSDK.RenderingDeps, Swift.Bool, _$sSD -> _$ss5Int64VMn JetfuelSDK.ComponentManager.ComponentData, _$sSD -> _$ss5Int64VMn JetfuelSDK.ComponentManager.ViewData, _$sSD -> _$ss5Int64VMn __C.CGRect, _TtCs12_SwiftObject;

@interface JetfuelSDK.ComponentManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.FormStateManager formState;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 JetfuelSDK.ComponentManager.ViewData views;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 JetfuelSDK.ComponentManager.ComponentData components;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 __C.CGRect layouts;
    JetfuelSDK.RenderingDeps deps;
    Swift.Bool performingAnimations;
    JetfuelSDK.AnimationCoordinator ? animationCoordinator;
    Swift.Bool animationsEnabled;
}

@end

#endif /* _TtC10JetfuelSDK16ComponentManager_h */
