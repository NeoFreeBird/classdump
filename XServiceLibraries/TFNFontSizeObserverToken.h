//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFontSizeObserverToken_h
#define TFNFontSizeObserverToken_h
@import Foundation;

@class NSObject;

@interface TFNFontSizeObserverToken : NSObject {
    /* instance variables */
    id _observerToken;
}

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;

@end

#endif /* TFNFontSizeObserverToken_h */
