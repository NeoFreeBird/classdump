//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVHydraParticipant_Protocol_h
#define TAVHydraParticipant_Protocol_h
@import Foundation;

@class NSMutableDictionary, NSNumber;

@protocol TAVHydraParticipant

@required

@property (readonly, copy, nonatomic) NSNumber *audioLevel;
@property (readonly, nonatomic) _Bool isActive;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

@optional

@end

#endif /* TAVHydraParticipant_Protocol_h */
