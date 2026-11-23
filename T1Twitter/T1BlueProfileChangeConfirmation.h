//
#ifndef T1BlueProfileChangeConfirmation_h
#define T1BlueProfileChangeConfirmation_h
@import Foundation;

@class NSObject, NSString;

@interface T1BlueProfileChangeConfirmation : NSObject // (Swift)

@property (nonatomic, readonly) NSString *cancelButtonLabel;
@property (nonatomic, readonly) NSString *confirmButtonLabel;
@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *text;

/* instance methods */
- (id)init;

@end

#endif /* T1BlueProfileChangeConfirmation_h */
