//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
