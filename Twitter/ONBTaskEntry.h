//
#ifndef ONBTaskEntry_h
#define ONBTaskEntry_h
@import Foundation;

#include "ONBTaskController.h"

@class NSMutableArray, NSObject;

@interface ONBTaskEntry : NSObject

@property (readonly, nonatomic) ONBTaskController *taskController;
@property (readonly, nonatomic) NSMutableArray *subtaskControllerStack;

/* instance methods */
- (id)initWithTaskController:(id)controller;

@end

#endif /* ONBTaskEntry_h */
