//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
