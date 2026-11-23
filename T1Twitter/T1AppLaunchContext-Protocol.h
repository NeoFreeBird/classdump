//
#ifndef T1AppLaunchContext_Protocol_h
#define T1AppLaunchContext_Protocol_h
@import Foundation;

@class NSString;

@protocol T1AppLaunchContext

@required

@property (nonatomic, readonly) long long appState;
@property (nonatomic, readonly) long long entryPoint;
@property (nonatomic, readonly) _Bool isLaunchingToPanelRoot;
@property (nonatomic, readonly) long long launchDestinationHandlerActionType;
@property (nonatomic, readonly) NSString *launchID;
@property (nonatomic, readonly) long long launchPanelID;
@property (nonatomic, readonly) long long launchType;

@optional

@end

#endif /* T1AppLaunchContext_Protocol_h */
