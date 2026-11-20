//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT29URTBottomCursorBackoffManager_h
#define _TtC10TwitterURT29URTBottomCursorBackoffManager_h
@import Foundation;

@class NSObject, TwitterURT.URTBottomCursorBackoffManager.Backoff, TwitterURT.URTBottomCursorBackoffManager.BackoffCalculator, TwitterURT.URTBottomCursorBackoffManager.BackoffStrategy, TwitterURT.URTBottomCursorBackoffManagerDelegate ?, _$sSdSg;

@interface TwitterURT.URTBottomCursorBackoffManager : NSObject { // (Swift)
    /* instance variables */
    TwitterURT.URTBottomCursorBackoffManager.BackoffStrategy strategy;
    TwitterURT.URTBottomCursorBackoffManager.BackoffCalculator backoffCalcluator;
    Swift.Double? networkFailureRetryInterval;
    TwitterURT.URTBottomCursorBackoffManager.Backoff backoff;
    TwitterURT.URTBottomCursorBackoffManagerDelegate ? delegate;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC10TwitterURT29URTBottomCursorBackoffManager_h */
