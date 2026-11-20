//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
