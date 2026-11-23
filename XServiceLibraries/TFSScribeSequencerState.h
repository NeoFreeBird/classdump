//
#ifndef TFSScribeSequencerState_h
#define TFSScribeSequencerState_h
@import Foundation;

@class NSObject;

@interface TFSScribeSequencerState : NSObject

@property (nonatomic) _Bool isOpen;
@property (nonatomic) long long openCount;

@end

#endif /* TFSScribeSequencerState_h */
