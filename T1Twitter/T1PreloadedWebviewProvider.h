//
#ifndef T1PreloadedWebviewProvider_h
#define T1PreloadedWebviewProvider_h
@import Foundation;

@class NSObject;

@interface T1PreloadedWebviewProvider : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *maximumWebviews;
    NSNumber"16@0:8 *webviewCache;
    NSNumber"16@0:8 *preloadUrl;
    NSNumber"16@0:8 *preloadingEnabled;
}

@property (nonatomic, readonly) long long preloadedWebviewCount;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)prepareFor:(id)_for;
- (void)clearUnhealthyWebviews;
- (void)clearWebviewsForBackgrounding;
- (void)clearAllWebviewsDueToMemoryWarning;

@end

#endif /* T1PreloadedWebviewProvider_h */
