//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsTentpolesTrackerPlaythroughState_h
#define TAVAnalyticsTentpolesTrackerPlaythroughState_h
@import Foundation;

@class NSObject;

@interface TAVAnalyticsTentpolesTrackerPlaythroughState : NSObject

@property (nonatomic) _Bool firedTentpole25;
@property (nonatomic) _Bool firedTentpole50;
@property (nonatomic) _Bool firedTentpole75;
@property (nonatomic) _Bool firedTentpole95;
@property (nonatomic) _Bool firedTentpole100;

@end

#endif /* TAVAnalyticsTentpolesTrackerPlaythroughState_h */
