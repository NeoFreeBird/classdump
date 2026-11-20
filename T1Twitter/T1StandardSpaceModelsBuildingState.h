//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardSpaceModelsBuildingState_h
#define T1StandardSpaceModelsBuildingState_h
@import Foundation;

#include "T1StandardSpaceUserModel.h"

@class NSArray, NSObject;

@interface T1StandardSpaceModelsBuildingState : NSObject

@property (readonly, nonatomic) NSArray *adminsUserModels;
@property (readonly, nonatomic) NSArray *speakersUserModels;
@property (readonly, nonatomic) NSArray *adminsAndSpeakersUserModels;
@property (readonly, nonatomic) NSArray *freshSpeakersUserModels;
@property (readonly, nonatomic) NSArray *callingUserModels;
@property (readonly, nonatomic) NSArray *freshCallingUserModels;
@property (readonly, nonatomic) NSArray *listenersUserModels;
@property (readonly, nonatomic) _Bool hasNewListeners;
@property (readonly, nonatomic) T1StandardSpaceUserModel *loggedInUserModel;

/* instance methods */
- (id)initWithAdminUserModels:(id)models speakerUserModels:(id)models freshSpeakersUserModels:(id)models callingUserModels:(id)models freshCallingUserModels:(id)models listenersUserModels:(id)models hasNewListeners:(_Bool)listeners loggedInUserModel:(id)model;

@end

#endif /* T1StandardSpaceModelsBuildingState_h */
