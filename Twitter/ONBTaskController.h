//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBTaskController_h
#define ONBTaskController_h
@import Foundation;

#include "OCFErrorHandler-Protocol.h"
#include "OCFSubtaskDataProvider-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "ONBTaskControllerDelegate-Protocol.h"

@class NSDate, NSMapTable, NSObject, NSString, OCFTask;

@interface ONBTaskController : NSObject <ONBSubtaskControllerDelegate, OCFSubtaskDataProvider, OCFErrorHandler> {
    /* instance variables */
    id <ONBTaskControllerDelegate> _delegate;
    ONBSubtaskController *_currentSubtaskController;
    NSMapTable *_reportableComponentsContainersBySubtaskController;
    NSDate *_currentSubtaskControllerStartTime;
}

@property (readonly, nonatomic) OCFTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)privateTestable_callbackParameterCollectionForSubtaskID:(id)id subtaskStateDictionary:(id)dictionary;

/* instance methods */
- (id)initWithTask:(id)task delegate:(id)delegate;
- (void)start;
- (id)private_controllerForSubtask:(id)subtask;
- (id)private_subtaskWithID:(id)id;
- (void)private_startSubtaskWithID:(id)id navigationContext:(id)context navigationLink:(id)link;
- (void)private_startSubtask:(id)subtask navigationContext:(id)context navigationLink:(id)link allowRestart:(_Bool)restart;
- (_Bool)private_validateCanStartSubtaskController:(id)controller forSubtask:(id)subtask;
- (void)private_subtaskController:(id)controller willFinishWithNavigationLink:(id)link;
- (id)private_scribe;
- (void)private_logAction:(id)action forSubtaskID:(id)id section:(id)section component:(id)component element:(id)element scribeItem:(id)item scribeParameters:(id)parameters;
- (void)private_registerReportableComponentsWithViewController:(id)controller forSubtaskController:(id)controller;
- (id)private_reportableComponentsForSubtaskController:(id)controller;
- (id)private_transformOCFSubtask:(id)ocfsubtask;
- (void)handleError:(id)error completion:(id /* block */)completion;
- (id)subtaskController:(id)controller pushViewController:(id)controller withPresentationType:(long long)type completion:(id /* block */)completion;
- (void)subtaskController:(id)controller presentViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)subtaskController:(id)controller waitWithMessage:(id)message;
- (void)subtaskControllerStopWaiting:(id)waiting;
- (void)subtaskControllerDidCancelFlow:(id)flow;
- (id)currentWindowForSubtaskController:(id)controller;
- (id)hudWindowForSubtaskController:(id)controller;
- (void)subtaskController:(id)controller didActivateNavigationLink:(id)link listener:(id /* block */)listener;
- (id)currentAccountForSubtaskController:(id)controller;
- (void)subtaskController:(id)controller didChangeCurrentAccount:(id)account;
- (void)subtaskController:(id)controller didFailWithFlowError:(id)error;
- (void)viewCurrentAccountForSubtaskController:(id)controller completion:(id /* block */)completion;
- (id)subtaskDataProviderForSubtaskController:(id)controller;
- (id)subtaskController:(id)controller stateValueForKey:(id)key;
- (void)subtaskController:(id)controller setStateValue:(id)value forKey:(id)key;
- (void)subtaskController:(id)controller setFlowOverrideLanguage:(id)language;
- (void)subtaskController:(id)controller setFlowStatus:(long long)status;
- (void)logAction:(id)action forSubtaskController:(id)controller section:(id)section component:(id)component element:(id)element scribeItem:(id)item;
- (long long)componentCollectionViewModelOptionsForSubtaskController:(id)controller;
- (id)objectForKey:(id)key inSubtaskWithID:(id)id defaultValue:(id)value;
- (id)stringForKey:(id)key inSubtaskWithID:(id)id;
- (id)imageForKey:(id)key inSubtaskWithID:(id)id;
- (id)dateForKey:(id)key inSubtaskWithID:(id)id;
- (long long)integerForKey:(id)key inSubtaskWithID:(id)id defaultValue:(long long)value;
- (_Bool)boolForKey:(id)key inSubtaskWithID:(id)id defaultValue:(_Bool)value;
- (void)subtaskController:(id)controller registerEndOfFlowAction:(id /* block */)action;

@end

#endif /* ONBTaskController_h */
