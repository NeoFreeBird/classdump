//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRHeartbeatsPayload_h
#define FIRHeartbeatsPayload_h
@import Foundation;

@class HasMalware, NSObject;

@interface FIRHeartbeatsPayload : NSObject { // (Swift)
    /* instance variables */
    HasMalware heartbeatsPayload;
}

@property (nonatomic, readonly) _Bool isEmpty;

/* instance methods */
- (id)headerValue;
- (id)init;

@end

#endif /* FIRHeartbeatsPayload_h */
