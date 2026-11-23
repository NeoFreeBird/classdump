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
