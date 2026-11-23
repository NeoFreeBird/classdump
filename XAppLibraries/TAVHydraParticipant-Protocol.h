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
