//
#ifndef TFSDeallocHook_h
#define TFSDeallocHook_h
@import Foundation;

@class NSObject;

@interface TFSDeallocHook : NSObject {
    /* instance variables */
    id /* block */ _callback;
}

/* class methods */
+ (void)attachTo:(id)to forKey:(const void *)key callback:(id /* block */)callback;
+ (void)unattachFrom:(id)from forKey:(const void *)key;

/* instance methods */
- (id)initWithCallback:(id /* block */)callback;
- (void)removeCallback;
- (void)dealloc;

@end

#endif /* TFSDeallocHook_h */
