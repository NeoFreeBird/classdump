//
#ifndef ONBSubtaskControllerFactory_h
#define ONBSubtaskControllerFactory_h
@import Foundation;

@class NSObject;

@interface ONBSubtaskControllerFactory : NSObject

/* class methods */
+ (id)subtaskControllerClasses;
+ (id)subtaskControllerFactories;
+ (id)subtaskControllerForSubtask:(id)subtask delegate:(id)delegate flowToken:(id)token;

@end

#endif /* ONBSubtaskControllerFactory_h */
