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
