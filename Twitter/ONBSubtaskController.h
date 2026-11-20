//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSubtaskController_h
#define ONBSubtaskController_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, OCFSubtaskState;

@interface ONBSubtaskController : NSObject <OCFNavigationLinkHandler> {
    /* instance variables */
    id <ONBSubtaskControllerDelegate> _controllerDelegate;
}

@property (readonly, nonatomic) NSString *subtaskID;
@property (readonly, nonatomic) long long subtaskBackNavigationType;
@property (readonly, nonatomic) OCFSubtaskState *subtaskState;
@property (readonly, nonatomic) _Bool canRestartForErrors;
@property (readonly, nonatomic) NSDictionary *subtaskData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (id)initWithSubtask:(id)subtask state:(id)state flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)restartWithNavigationContext:(id)context navigationLink:(id)link;
- (void)didActivateNavigationLink:(id)link;
- (void)didActivateNavigationLink:(id)link listener:(id /* block */)listener;
- (_Bool)requiresAccountToStart;
- (_Bool)private_isSubtaskSupported:(id)supported;

@end

#endif /* ONBSubtaskController_h */
