//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterContact_h
#define TFSTwitterContact_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSNumber, NSObject;

@interface TFSTwitterContact : NSObject <NSCoding>

@property (readonly, nonatomic) long long contactID;
@property (readonly, nonatomic) NSNumber *contactIndex;

/* instance methods */
- (id)initWithContactIdentifier:(long long)identifier index:(id)index;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterContact_h */
