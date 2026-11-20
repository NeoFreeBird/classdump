//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppAttestRejectionError_h
#define GACAppAttestRejectionError_h
@import Foundation;

@class NSError;

@interface GACAppAttestRejectionError : NSError

@property (readonly, nonatomic) NSError *underlyingError;

/* instance methods */
- (id)initWithUnderlyingError:(id)error;

@end

#endif /* GACAppAttestRejectionError_h */
