//
#ifndef FIRSessionDetails_h
#define FIRSessionDetails_h
@import Foundation;

@class HasMalware, NSObject, NSString;

@interface FIRSessionDetails : NSObject // (Swift)

@property (nonatomic, copy) NSString *sessionId;

/* instance methods */
- (id)init;

@end

#endif /* FIRSessionDetails_h */
