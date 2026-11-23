//
#ifndef XNAVEventObservationToken_h
#define XNAVEventObservationToken_h
@import Foundation;

@class NSObject;

@interface XNAVEventObservationToken : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cancellable;
}

/* instance methods */
- (void)cancel;
- (id)init;

@end

#endif /* XNAVEventObservationToken_h */
