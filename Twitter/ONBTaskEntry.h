//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
