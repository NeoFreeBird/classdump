//
#ifndef _TtC17GrokVoiceRealtime12CallObserver_h
#define _TtC17GrokVoiceRealtime12CallObserver_h
@import Foundation;

#include "CXCallObserverDelegate-Protocol.h"

@class GrokVoiceRealtime.CallObserverDelegate ?, NSObject, _$sSo14CXCallObserverC;

@interface GrokVoiceRealtime.CallObserver : NSObject <CXCallObserverDelegate> { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.CallObserverDelegate ? delegate;
    __C.CXCallObserver callObserver;
}

/* instance methods */
- (void)callObserver:(id)observer callChanged:(id)changed;
- (id)init;

@end

#endif /* _TtC17GrokVoiceRealtime12CallObserver_h */
