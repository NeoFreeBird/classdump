//
#ifndef TFSDatabaseAutoAnalyzerState_h
#define TFSDatabaseAutoAnalyzerState_h
@import Foundation;

@class NSObject;

@interface TFSDatabaseAutoAnalyzerState : NSObject {
    /* instance variables */
    _Bool _enabled;
    _Bool _didEnableSinceLastOptimize;
    long long _changedRowCountSinceLastOptimize;
}

@end

#endif /* TFSDatabaseAutoAnalyzerState_h */
