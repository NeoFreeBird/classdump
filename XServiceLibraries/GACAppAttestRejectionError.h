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
