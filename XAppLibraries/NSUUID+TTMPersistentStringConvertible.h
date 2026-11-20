//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSUUID_TTMPersistentStringConvertible_h
#define NSUUID_TTMPersistentStringConvertible_h
@import Foundation;

@interface NSUUID (TTMPersistentStringConvertible) <TTMPersistentStringConvertible>

/* instance methods */
- (id)persistentString;

@end

#endif /* NSUUID_TTMPersistentStringConvertible_h */
