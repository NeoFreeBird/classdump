//
#ifndef PTVCADisplayLinkWeakTarget_h
#define PTVCADisplayLinkWeakTarget_h
@import Foundation;

@class NSObject;
@protocol PTVCADisplayLinkWeakTargetDelegate;

@interface PTVCADisplayLinkWeakTarget : NSObject {
    /* instance variables */
    id <PTVCADisplayLinkWeakTargetDelegate> _delegate;
}

/* class methods */
+ (id)DisplayLinkWithDelegate:(id)delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)displayLinkDidFire:(id)fire;

@end

#endif /* PTVCADisplayLinkWeakTarget_h */
