//
#ifndef CXProviderDelegate_Protocol_h
#define CXProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CXProviderDelegate <NSObject>

@required

/* required instance methods */
- (void)providerDidReset:(id)reset;

@optional

/* optional instance methods */
- (void)providerDidBegin:(id)begin;
- (_Bool)provider:(id)provider executeTransaction:(id)transaction;
- (_Bool)provider:(id)provider executeTransaction:(id)transaction;
- (void)provider:(id)provider performStartCallAction:(id)action;
- (void)provider:(id)provider performStartCallAction:(id)action;
- (void)provider:(id)provider performAnswerCallAction:(id)action;
- (void)provider:(id)provider performAnswerCallAction:(id)action;
- (void)provider:(id)provider performEndCallAction:(id)action;
- (void)provider:(id)provider performEndCallAction:(id)action;
- (void)provider:(id)provider performSetHeldCallAction:(id)action;
- (void)provider:(id)provider performSetHeldCallAction:(id)action;
- (void)provider:(id)provider performSetMutedCallAction:(id)action;
- (void)provider:(id)provider performSetMutedCallAction:(id)action;
- (void)provider:(id)provider performSetGroupCallAction:(id)action;
- (void)provider:(id)provider performSetGroupCallAction:(id)action;
- (void)provider:(id)provider performPlayDTMFCallAction:(id)action;
- (void)provider:(id)provider performPlayDTMFCallAction:(id)action;
- (void)provider:(id)provider performSetTranslatingCallAction:(id)action;
- (void)provider:(id)provider performSetTranslatingCallAction:(id)action;
- (void)provider:(id)provider timedOutPerformingAction:(id)action;
- (void)provider:(id)provider timedOutPerformingAction:(id)action;
- (void)provider:(id)provider didActivateAudioSession:(id)session;
- (void)provider:(id)provider didActivateAudioSession:(id)session;
- (void)provider:(id)provider didDeactivateAudioSession:(id)session;
- (void)provider:(id)provider didDeactivateAudioSession:(id)session;

@end

#endif /* CXProviderDelegate_Protocol_h */
