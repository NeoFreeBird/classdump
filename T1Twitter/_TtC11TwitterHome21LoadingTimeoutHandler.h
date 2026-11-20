//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11TwitterHome21LoadingTimeoutHandler_h
#define _TtC11TwitterHome21LoadingTimeoutHandler_h
@import Foundation;

@class NSObject, TwitterHome.LoadingTimeoutHandler.LoadingState, TwitterHome29LoadingTimeoutHandlerDelegate_pSgXw, _$sSd, _$sSo7NSTimerCSg;

@interface TwitterHome.LoadingTimeoutHandler : NSObject { // (Swift)
    /* instance variables */
    Swift.Double minimumLoadingSeconds;
    Swift.Double timeoutSeconds;
    __C.NSTimer? timer;
    TwitterHome29LoadingTimeoutHandlerDelegate_pSgXw delegate;
    TwitterHome.LoadingTimeoutHandler.LoadingState state;
}

@property (nonatomic, readonly) _Bool timeoutExpired;
@property (nonatomic, readonly) _Bool loadingMinimumTimeoutExpired;

/* instance methods */
- (id)initWithDelegate:(id)delegate minimumLoadingSeconds:(double)seconds timeoutSeconds:(double)seconds;
- (void)dealloc;
- (void)startTimeout;
- (void)cancelTimeout;
- (id)init;

@end

#endif /* _TtC11TwitterHome21LoadingTimeoutHandler_h */
