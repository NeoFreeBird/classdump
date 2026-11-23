//
#ifndef TAVSession_Protocol_h
#define TAVSession_Protocol_h
@import Foundation;

#include "TAVScribe-Protocol.h"

@class NSMutableDictionary, NSUUID;

@protocol TAVSession

@required

@property (readonly, nonatomic) id <TAVScribe> scribe;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) NSMutableDictionary *debugInfo;

/* required instance methods */
- (void)prepareWithPlayerPreparationStartWallTime:(id)time completion:(id /* block */)completion;
- (void)end;

@optional

@end

#endif /* TAVSession_Protocol_h */
