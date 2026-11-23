//
#ifndef GACAppAttestAssertionData_h
#define GACAppAttestAssertionData_h
@import Foundation;

@class NSData, NSObject;

@interface GACAppAttestAssertionData : NSObject

@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) NSData *assertion;

/* instance methods */
- (id)initWithChallenge:(id)challenge artifact:(id)artifact assertion:(id)assertion;

@end

#endif /* GACAppAttestAssertionData_h */
