//
#ifndef T1OnboardingUserFacepileViewProvider_h
#define T1OnboardingUserFacepileViewProvider_h
@import Foundation;

#include "T1UserFacepileViewProvider-Protocol.h"

@class NSObject, NSString, UIViewController;

@interface T1OnboardingUserFacepileViewProvider : NSObject <T1UserFacepileViewProvider>

@property (weak, nonatomic) UIViewController *presentingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresentingController:(id)controller;
- (id)compactFacepileWithViewModel:(id)model imagePipeline:(id)pipeline;
- (id)expandedFacepileWithViewModel:(id)model profileNavigationEnabled:(_Bool)enabled;
- (void)expandedFacepile:(id)facepile didUpdateUsersWithViewModel:(id)model;
- (id)profileViewControllerForUser:(id)user viewModel:(id)model;

@end

#endif /* T1OnboardingUserFacepileViewProvider_h */
