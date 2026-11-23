//
#ifndef TFNViewControllerExecutionContext_h
#define TFNViewControllerExecutionContext_h
@import Foundation;

#include "TFNExecutionContext-Protocol.h"

@class NSArray, NSObject, NSString, UIResponder, UIViewController, UIWindow;

@interface TFNViewControllerExecutionContext : NSObject <TFNExecutionContext>

@property (readonly, nonatomic) UIViewController *mainViewController;
@property (readonly, nonatomic) long long applicationState;
@property (readonly, nonatomic) UIWindow *keyWindow;
@property (readonly, nonatomic) NSArray *windows;
@property (readonly, nonatomic) UIWindow *delegateWindow;
@property (readonly, nonatomic) UIWindow *activeAnyWindow;
@property (readonly, nonatomic) UIWindow *activeSceneWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarFrame;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) _Bool statusBarHidden;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection;
@property (readonly, nonatomic) UIResponder *currentFirstResponder;
@property (readonly, nonatomic) _Bool fullscreen;
@property (readonly, nonatomic) _Bool supportsWindows;
@property (readonly, nonatomic) _Bool isDragAndDropEnabled;
@property (readonly, nonatomic) _Bool supportsHorizontalRegularSizeClass;
@property (readonly, nonatomic) UIWindow *tfn_screenWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMainViewController:(id)controller;
- (id)sceneWindowForWindow:(id)window;
- (_Bool)isStatusBarHidden;
- (unsigned long long)beginBackgroundTaskWithName:(id)name expirationHandler:(id /* block */)handler;
- (void)endBackgroundTask:(unsigned long long)task;
- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (_Bool)isFullscreen;

@end

#endif /* TFNViewControllerExecutionContext_h */
