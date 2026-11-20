//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
