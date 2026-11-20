//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileViewControllerUserContextProvider_Protocol_h
#define T1ProfileViewControllerUserContextProvider_Protocol_h
@import Foundation;

@class TUITwitterUserContext;

@protocol T1ProfileViewControllerUserContextProvider

@required

@property (nonatomic, readonly) TUITwitterUserContext *profileViewControllerUserContext;

@optional

@end

#endif /* T1ProfileViewControllerUserContextProvider_Protocol_h */
