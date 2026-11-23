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
