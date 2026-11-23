//
#ifndef GADKeyValueObserver_h
#define GADKeyValueObserver_h
@import Foundation;

@class NSObject, NSString;

@interface GADKeyValueObserver : NSObject {
    /* instance variables */
    id _object;
    id /* block */ _block;
    NSString *_key;
    GADKeyValueObserver *_retainCycle;
}

/* instance methods */
- (id)initWithObject:(id)object key:(id)key block:(id /* block */)block;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)invalidateAndCancel;

@end

#endif /* GADKeyValueObserver_h */
